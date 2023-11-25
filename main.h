#ifndef MAIN_H
#define	MAIN_H

//#define PFCGATEDRIVETEST
//#define LLCGATEDRIVETEST
//#define BUCKTEST
//#define LLCTEST
//#define HALFVOLTOUT

#include <xc.h> // include processor files - each processor file is guarded.  
#include "dsp.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include "mcc_generated_files/pin_manager.h"
#define FCY 75000000
#include <libpic30.h>

#ifndef EXTERN
#define EXTERN extern
#endif

#define PWMCLOCK 500000000.0  //Hz

#define LLCFREQMIN 80000.0 //short circuit test //85000.0   //need to drop for holdup, 80kHz?
#define LLCPERMAX ((const int)(PWMCLOCK/LLCFREQMIN))

#define LLCFREQMAX 250000.0 
#define LLCPERMIN ((const int)(PWMCLOCK/LLCFREQMAX))

#define LLCVOLTAGEQ15(X) ((const int)(X * 6260.0/(6260.0+150000.0) *4096.0 * 8.0 / 3.3)) //Q14
#define LLCVOLTAGEQ12(X) ((const int)(X * 6260.0/(6260.0+150000.0) *4096.0 / 3.3)) //Q14

#define _25V_CURRENT(X) ((const int)(X * 0.004 * 100.0 * 4096.0 * 8.0 / 3.3)) //Q15
#define _12V_CURRENT(X) ((const int)(X * 0.002 * 100.0 * 4096.0 * 8.0 / 3.3)) //Q15
#define _5V75_CURRENT(X) ((const int)(X * 0.001 * 100.0 * 4096.0 * 8.0 / 3.3)) //Q15

#define _25V_CURRENT_OCP _25V_CURRENT(8.2)  //8.2
#define _12V_CURRENT_OCP _12V_CURRENT(16.0)
#define _5V75_CURRENT_OCP _5V75_CURRENT(22.0)

#ifndef HALFVOLTOUT
#define _25V_SETPOINT LLCVOLTAGEQ15(25.0)
#else
#define _25V_SETPOINT LLCVOLTAGEQ15(12.5)
#endif

#define LLCVOLTAGEOVPSETPOINT LLCVOLTAGEQ12(29.0)
#define LLCVOLTAGEUVPSETPOINTDIFFERENCE LLCVOLTAGEQ15(3.0) //Hwat should this threshold be?//if running and vout drops below, shut down

/* PFC contants and calculations */
#define PFC_FREQUENCY 125000
/* for 8x oversample, SCCP1 clock is 100MHz or 1/5 and we want 8 samples */
#define PFC_PERIOD ((const int)(PWMCLOCK/PFC_FREQUENCY/40)*40-1)
#define PFC_DUTYMAX ((const int)(0.9 * PFC_PERIOD))

//X is in Volts, result is 12bit ADC
#define VBUS_DIVIDER(X) ((const int)(X * 100.0/10100.0*4096.0/3.3 + 0.5))
//X is in Amps, results is 12bit ADC
//sensor is TMCS1107A3, 200mV/A; 0 is 1/2 scale or 1.65v; +/-7.25A limit
#define IPFC_DIVIDER(X) ((const int)((X * 0.2 * 4096/3.3 + 0.5)))

//VAC DIVIDER GAIN WITH OFFSET CORRECTION, VALUE HAS POLARITY, OFFSET FIXED WHEN AQUIRED
#define VAC_DIVIDER(X) ((const int)(X*7500.0/998000.0*4096.0/3.3+0.5))

#define IMAX (IPFC_DIVIDER(7.0)<<3)
#define FEEDFORWARD_K 27906102 //see spreadsheet
#define MAXVACPIDVALUE 11000 //see spreadsheet

#define MAXPOWER 200.0 //watts

#define VAC_TURNON 380 //Vrms; need to be below 40 380=38vrms
#define VAC_TURNOFF 360  //360Vrms   
//we only measure 50% of the bus, Vpos, so the setpoint is divided by two
#define VBUSSETPOINTQ15 (const int)(VBUS_DIVIDER(180.0)<<3)  //172.5 on 05042023//tested up to 170, didn't get to 190 yet.
#define VBUSOVP (const int)(VBUS_DIVIDER(210.0)<<3) //the highest value is 443 w/o saturation



/* llc voltage PID values*/
#define PID_25V_KP 		0.8
#define PID_25V_KI 		0.025 //.05

#define PID_25V_KD 		0.0

#define PID_25V_A 		Q15(PID_25V_KP + PID_25V_KI + PID_25V_KD)
#define PID_25V_B 		Q15(-1 *(PID_25V_KP + 2 * PID_25V_KD))
#define PID_25V_C 		Q15(PID_25V_KD)

/* llc current PID values*/
#define PID_25I_KP 		0.7
#define PID_25I_KI 		0.02
#define PID_25I_KD 		0.0

#define PID_25I_A 		Q15(PID_25I_KP + PID_25I_KI + PID_25I_KD)
#define PID_25I_B 		Q15(-1 *(PID_25I_KP + 2 * PID_25I_KD))
#define PID_25I_C 		Q15(PID_25I_KD)

EXTERN fractional _25V_PIDABC[3] __attribute__((space(xmemory)));
EXTERN fractional _25V_PIDHistory[3] __attribute__((space(ymemory)));

EXTERN fractional _25I_PIDABC[3] __attribute__((space(xmemory)));
EXTERN fractional _25I_PIDHistory[3] __attribute__((space(ymemory)));

EXTERN fractional VpfcPIDABC[3] __attribute__((space(xmemory)));
EXTERN fractional VpfcPIDHistory[3] __attribute__((space(ymemory)));

EXTERN fractional IpfcPIDABC[3] __attribute__((space(xmemory)));
EXTERN fractional IpfcPIDHistory[3] __attribute__((space(ymemory)));

EXTERN tPID VpfcPID;
EXTERN tPID IpfcPID;
EXTERN tPID _25VPID;
EXTERN tPID _25IPID;

typedef enum {
    STANDBYPFC,
    FAULTPFC,
    OVPPFC,
    OTPPFC,
    NOTASTATEPFC,
    TRAPPEDFAULTPFC,
    VALIDATION,
    SOFTSTARTPFC,
    RUNNINGPFC
} pfcstates;

typedef enum {
    STANDBYLLC,
    FAULTLLC,
    NOTASTATELLC,
    SOFTSTARTLLC,
    RUNNINGLLC,
    OVPLLC
} llcstates;

EXTERN pfcstates systemstate_pfc;
EXTERN pfcstates oldstate_pfc;
EXTERN llcstates systemstate_llc;
EXTERN llcstates oldstate_llc;
EXTERN bool statechanged_pfc, statechanged_llc;
EXTERN volatile int16_t llcperiod, llcdutycycle;
EXTERN volatile long long pfcrmsquared_filter; //64 bit storage
EXTERN volatile long pfcrmsquared; //32 bit
EXTERN volatile int16_t vacrms, iscale, vpfccontrol_pry;
EXTERN volatile int16_t delaytime; //for 100us counting
EXTERN volatile int16_t pfcduty;

EXTERN int8_t rxindex;
EXTERN int8_t rxcount;
EXTERN bool decode;
EXTERN volatile uint16_t crc_pry;

EXTERN volatile uint8_t bufferin[24];
EXTERN volatile uint8_t bufferout[24];

//adc variables
EXTERN volatile int16_t _12i_adcQ15, _12v_adcQ15, 
        _5v75v_adcQ15, _5v75i_adcQ15,
        _25v_adcQ15, _25i_adcQ15,
        temperature_adcQ15;

EXTERN volatile bool newadc;
EXTERN volatile int ovp_counter;
EXTERN volatile int llc_ovp_counter;
EXTERN volatile bool lowvinstatus, ocpstatus;
EXTERN volatile int16_t lowvin_10uS_counter, ocp_counter, ovp_counter;
EXTERN volatile int16_t faultms, llctimerms;

struct timestruct {
    uint16_t ms;
    uint16_t seconds;
    uint16_t minutes;
    uint16_t hours;
};
EXTERN struct timestruct timerstruct;


#define DIS_LLCPWM {PG1IOCONL |= 0b11<<12;}
#define ENA_LLCPWM {PG1IOCONL &= ~(0b11<<12);}

#define ACOKLED_OFF {_LATC11 = 0; _LATC10 = 0;}
#define ACOKLED_GREEN {_LATC11 = 1; _LATC10 = 0;}
#define ACOKLED_RED {_LATC11 = 0; _LATC10 = 1;}

#define VOUTLED_OFF {_LATC4 = 0; _LATC5 = 0;}
#define VOUTLED_GREEN {_LATC4 = 0; _LATC5 = 1;}
#define VOUTLED_RED {_LATC4 = 1; _LATC5 = 0;}

//thermal ntc data
//25deg 1; 85c .1451; 90c .1261 95c .1097 .. 10k
#define OTP_OFF 5905 //95c; 109.7/(4990+109.7) * 2^15 = 705
#define OTP_ON  7400 //85c; 145.1/(4990+145.1) * 2^15 = )

#endif	/* XC_HEADER_TEMPLATE_H */

