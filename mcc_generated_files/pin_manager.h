/**
  PIN MANAGER Generated Driver File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the generated manager file for the PIC24 / dsPIC33 / PIC32MM MCUs device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description:
    This source file provides implementations for PIN MANAGER.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.171.4
        Device            :  dsPIC33CH256MP505
    The generated drivers are tested against the following:
        Compiler          :  XC16 v2.10
        MPLAB 	          :  MPLAB X v6.05
*/

/*
    (c) 2020 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#ifndef _PIN_MANAGER_H
#define _PIN_MANAGER_H
/**
    Section: Includes
*/
#include <xc.h>

/**
    Section: Device Pin Macros
*/
/**
  @Summary
    Sets the GPIO pin, RA0, high using LATA0.

  @Description
    Sets the GPIO pin, RA0, high using LATA0.

  @Preconditions
    The RA0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA0 high (1)
    ADDRESS_SetHigh();
    </code>

*/
#define ADDRESS_SetHigh()          (_LATA0 = 1)
/**
  @Summary
    Sets the GPIO pin, RA0, low using LATA0.

  @Description
    Sets the GPIO pin, RA0, low using LATA0.

  @Preconditions
    The RA0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA0 low (0)
    ADDRESS_SetLow();
    </code>

*/
#define ADDRESS_SetLow()           (_LATA0 = 0)
/**
  @Summary
    Toggles the GPIO pin, RA0, using LATA0.

  @Description
    Toggles the GPIO pin, RA0, using LATA0.

  @Preconditions
    The RA0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RA0
    ADDRESS_Toggle();
    </code>

*/
#define ADDRESS_Toggle()           (_LATA0 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RA0.

  @Description
    Reads the value of the GPIO pin, RA0.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RA0
    postValue = ADDRESS_GetValue();
    </code>

*/
#define ADDRESS_GetValue()         _RA0
/**
  @Summary
    Configures the GPIO pin, RA0, as an input.

  @Description
    Configures the GPIO pin, RA0, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA0 as an input
    ADDRESS_SetDigitalInput();
    </code>

*/
#define ADDRESS_SetDigitalInput()  (_TRISA0 = 1)
/**
  @Summary
    Configures the GPIO pin, RA0, as an output.

  @Description
    Configures the GPIO pin, RA0, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA0 as an output
    ADDRESS_SetDigitalOutput();
    </code>

*/
#define ADDRESS_SetDigitalOutput() (_TRISA0 = 0)
/**
  @Summary
    Sets the GPIO pin, RA1, high using LATA1.

  @Description
    Sets the GPIO pin, RA1, high using LATA1.

  @Preconditions
    The RA1 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA1 high (1)
    _5V75V_ADC_SetHigh();
    </code>

*/
#define _5V75V_ADC_SetHigh()          (_LATA1 = 1)
/**
  @Summary
    Sets the GPIO pin, RA1, low using LATA1.

  @Description
    Sets the GPIO pin, RA1, low using LATA1.

  @Preconditions
    The RA1 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA1 low (0)
    _5V75V_ADC_SetLow();
    </code>

*/
#define _5V75V_ADC_SetLow()           (_LATA1 = 0)
/**
  @Summary
    Toggles the GPIO pin, RA1, using LATA1.

  @Description
    Toggles the GPIO pin, RA1, using LATA1.

  @Preconditions
    The RA1 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RA1
    _5V75V_ADC_Toggle();
    </code>

*/
#define _5V75V_ADC_Toggle()           (_LATA1 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RA1.

  @Description
    Reads the value of the GPIO pin, RA1.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RA1
    postValue = _5V75V_ADC_GetValue();
    </code>

*/
#define _5V75V_ADC_GetValue()         _RA1
/**
  @Summary
    Configures the GPIO pin, RA1, as an input.

  @Description
    Configures the GPIO pin, RA1, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA1 as an input
    _5V75V_ADC_SetDigitalInput();
    </code>

*/
#define _5V75V_ADC_SetDigitalInput()  (_TRISA1 = 1)
/**
  @Summary
    Configures the GPIO pin, RA1, as an output.

  @Description
    Configures the GPIO pin, RA1, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA1 as an output
    _5V75V_ADC_SetDigitalOutput();
    </code>

*/
#define _5V75V_ADC_SetDigitalOutput() (_TRISA1 = 0)
/**
  @Summary
    Sets the GPIO pin, RA2, high using LATA2.

  @Description
    Sets the GPIO pin, RA2, high using LATA2.

  @Preconditions
    The RA2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA2 high (1)
    _5V75I_ADC_SetHigh();
    </code>

*/
#define _5V75I_ADC_SetHigh()          (_LATA2 = 1)
/**
  @Summary
    Sets the GPIO pin, RA2, low using LATA2.

  @Description
    Sets the GPIO pin, RA2, low using LATA2.

  @Preconditions
    The RA2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA2 low (0)
    _5V75I_ADC_SetLow();
    </code>

*/
#define _5V75I_ADC_SetLow()           (_LATA2 = 0)
/**
  @Summary
    Toggles the GPIO pin, RA2, using LATA2.

  @Description
    Toggles the GPIO pin, RA2, using LATA2.

  @Preconditions
    The RA2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RA2
    _5V75I_ADC_Toggle();
    </code>

*/
#define _5V75I_ADC_Toggle()           (_LATA2 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RA2.

  @Description
    Reads the value of the GPIO pin, RA2.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RA2
    postValue = _5V75I_ADC_GetValue();
    </code>

*/
#define _5V75I_ADC_GetValue()         _RA2
/**
  @Summary
    Configures the GPIO pin, RA2, as an input.

  @Description
    Configures the GPIO pin, RA2, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA2 as an input
    _5V75I_ADC_SetDigitalInput();
    </code>

*/
#define _5V75I_ADC_SetDigitalInput()  (_TRISA2 = 1)
/**
  @Summary
    Configures the GPIO pin, RA2, as an output.

  @Description
    Configures the GPIO pin, RA2, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA2 as an output
    _5V75I_ADC_SetDigitalOutput();
    </code>

*/
#define _5V75I_ADC_SetDigitalOutput() (_TRISA2 = 0)
/**
  @Summary
    Sets the GPIO pin, RA3, high using LATA3.

  @Description
    Sets the GPIO pin, RA3, high using LATA3.

  @Preconditions
    The RA3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA3 high (1)
    IO_RA3_SetHigh();
    </code>

*/
#define IO_RA3_SetHigh()          (_LATA3 = 1)
/**
  @Summary
    Sets the GPIO pin, RA3, low using LATA3.

  @Description
    Sets the GPIO pin, RA3, low using LATA3.

  @Preconditions
    The RA3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA3 low (0)
    IO_RA3_SetLow();
    </code>

*/
#define IO_RA3_SetLow()           (_LATA3 = 0)
/**
  @Summary
    Toggles the GPIO pin, RA3, using LATA3.

  @Description
    Toggles the GPIO pin, RA3, using LATA3.

  @Preconditions
    The RA3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RA3
    IO_RA3_Toggle();
    </code>

*/
#define IO_RA3_Toggle()           (_LATA3 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RA3.

  @Description
    Reads the value of the GPIO pin, RA3.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RA3
    postValue = IO_RA3_GetValue();
    </code>

*/
#define IO_RA3_GetValue()         _RA3
/**
  @Summary
    Configures the GPIO pin, RA3, as an input.

  @Description
    Configures the GPIO pin, RA3, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA3 as an input
    IO_RA3_SetDigitalInput();
    </code>

*/
#define IO_RA3_SetDigitalInput()  (_TRISA3 = 1)
/**
  @Summary
    Configures the GPIO pin, RA3, as an output.

  @Description
    Configures the GPIO pin, RA3, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA3 as an output
    IO_RA3_SetDigitalOutput();
    </code>

*/
#define IO_RA3_SetDigitalOutput() (_TRISA3 = 0)
/**
  @Summary
    Sets the GPIO pin, RA4, high using LATA4.

  @Description
    Sets the GPIO pin, RA4, high using LATA4.

  @Preconditions
    The RA4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA4 high (1)
    _12V_ADC_SetHigh();
    </code>

*/
#define _12V_ADC_SetHigh()          (_LATA4 = 1)
/**
  @Summary
    Sets the GPIO pin, RA4, low using LATA4.

  @Description
    Sets the GPIO pin, RA4, low using LATA4.

  @Preconditions
    The RA4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA4 low (0)
    _12V_ADC_SetLow();
    </code>

*/
#define _12V_ADC_SetLow()           (_LATA4 = 0)
/**
  @Summary
    Toggles the GPIO pin, RA4, using LATA4.

  @Description
    Toggles the GPIO pin, RA4, using LATA4.

  @Preconditions
    The RA4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RA4
    _12V_ADC_Toggle();
    </code>

*/
#define _12V_ADC_Toggle()           (_LATA4 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RA4.

  @Description
    Reads the value of the GPIO pin, RA4.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RA4
    postValue = _12V_ADC_GetValue();
    </code>

*/
#define _12V_ADC_GetValue()         _RA4
/**
  @Summary
    Configures the GPIO pin, RA4, as an input.

  @Description
    Configures the GPIO pin, RA4, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA4 as an input
    _12V_ADC_SetDigitalInput();
    </code>

*/
#define _12V_ADC_SetDigitalInput()  (_TRISA4 = 1)
/**
  @Summary
    Configures the GPIO pin, RA4, as an output.

  @Description
    Configures the GPIO pin, RA4, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA4 as an output
    _12V_ADC_SetDigitalOutput();
    </code>

*/
#define _12V_ADC_SetDigitalOutput() (_TRISA4 = 0)
/**
  @Summary
    Sets the GPIO pin, RB1, high using LATB1.

  @Description
    Sets the GPIO pin, RB1, high using LATB1.

  @Preconditions
    The RB1 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB1 high (1)
    TEMPERATURE_ADC_SetHigh();
    </code>

*/
#define TEMPERATURE_ADC_SetHigh()          (_LATB1 = 1)
/**
  @Summary
    Sets the GPIO pin, RB1, low using LATB1.

  @Description
    Sets the GPIO pin, RB1, low using LATB1.

  @Preconditions
    The RB1 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB1 low (0)
    TEMPERATURE_ADC_SetLow();
    </code>

*/
#define TEMPERATURE_ADC_SetLow()           (_LATB1 = 0)
/**
  @Summary
    Toggles the GPIO pin, RB1, using LATB1.

  @Description
    Toggles the GPIO pin, RB1, using LATB1.

  @Preconditions
    The RB1 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB1
    TEMPERATURE_ADC_Toggle();
    </code>

*/
#define TEMPERATURE_ADC_Toggle()           (_LATB1 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RB1.

  @Description
    Reads the value of the GPIO pin, RB1.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB1
    postValue = TEMPERATURE_ADC_GetValue();
    </code>

*/
#define TEMPERATURE_ADC_GetValue()         _RB1
/**
  @Summary
    Configures the GPIO pin, RB1, as an input.

  @Description
    Configures the GPIO pin, RB1, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB1 as an input
    TEMPERATURE_ADC_SetDigitalInput();
    </code>

*/
#define TEMPERATURE_ADC_SetDigitalInput()  (_TRISB1 = 1)
/**
  @Summary
    Configures the GPIO pin, RB1, as an output.

  @Description
    Configures the GPIO pin, RB1, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB1 as an output
    TEMPERATURE_ADC_SetDigitalOutput();
    </code>

*/
#define TEMPERATURE_ADC_SetDigitalOutput() (_TRISB1 = 0)
/**
  @Summary
    Sets the GPIO pin, RB10, high using LATB10.

  @Description
    Sets the GPIO pin, RB10, high using LATB10.

  @Preconditions
    The RB10 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB10 high (1)
    IO_RB10_SetHigh();
    </code>

*/
#define IO_RB10_SetHigh()          (_LATB10 = 1)
/**
  @Summary
    Sets the GPIO pin, RB10, low using LATB10.

  @Description
    Sets the GPIO pin, RB10, low using LATB10.

  @Preconditions
    The RB10 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB10 low (0)
    IO_RB10_SetLow();
    </code>

*/
#define IO_RB10_SetLow()           (_LATB10 = 0)
/**
  @Summary
    Toggles the GPIO pin, RB10, using LATB10.

  @Description
    Toggles the GPIO pin, RB10, using LATB10.

  @Preconditions
    The RB10 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB10
    IO_RB10_Toggle();
    </code>

*/
#define IO_RB10_Toggle()           (_LATB10 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RB10.

  @Description
    Reads the value of the GPIO pin, RB10.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB10
    postValue = IO_RB10_GetValue();
    </code>

*/
#define IO_RB10_GetValue()         _RB10
/**
  @Summary
    Configures the GPIO pin, RB10, as an input.

  @Description
    Configures the GPIO pin, RB10, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB10 as an input
    IO_RB10_SetDigitalInput();
    </code>

*/
#define IO_RB10_SetDigitalInput()  (_TRISB10 = 1)
/**
  @Summary
    Configures the GPIO pin, RB10, as an output.

  @Description
    Configures the GPIO pin, RB10, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB10 as an output
    IO_RB10_SetDigitalOutput();
    </code>

*/
#define IO_RB10_SetDigitalOutput() (_TRISB10 = 0)
/**
  @Summary
    Sets the GPIO pin, RB11, high using LATB11.

  @Description
    Sets the GPIO pin, RB11, high using LATB11.

  @Preconditions
    The RB11 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB11 high (1)
    ENA_TPS51220_SetHigh();
    </code>

*/
#define ENA_TPS51220_SetHigh()          (_LATB11 = 1)
/**
  @Summary
    Sets the GPIO pin, RB11, low using LATB11.

  @Description
    Sets the GPIO pin, RB11, low using LATB11.

  @Preconditions
    The RB11 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB11 low (0)
    ENA_TPS51220_SetLow();
    </code>

*/
#define ENA_TPS51220_SetLow()           (_LATB11 = 0)
/**
  @Summary
    Toggles the GPIO pin, RB11, using LATB11.

  @Description
    Toggles the GPIO pin, RB11, using LATB11.

  @Preconditions
    The RB11 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB11
    ENA_TPS51220_Toggle();
    </code>

*/
#define ENA_TPS51220_Toggle()           (_LATB11 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RB11.

  @Description
    Reads the value of the GPIO pin, RB11.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB11
    postValue = ENA_TPS51220_GetValue();
    </code>

*/
#define ENA_TPS51220_GetValue()         _RB11
/**
  @Summary
    Configures the GPIO pin, RB11, as an input.

  @Description
    Configures the GPIO pin, RB11, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB11 as an input
    ENA_TPS51220_SetDigitalInput();
    </code>

*/
#define ENA_TPS51220_SetDigitalInput()  (_TRISB11 = 1)
/**
  @Summary
    Configures the GPIO pin, RB11, as an output.

  @Description
    Configures the GPIO pin, RB11, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB11 as an output
    ENA_TPS51220_SetDigitalOutput();
    </code>

*/
#define ENA_TPS51220_SetDigitalOutput() (_TRISB11 = 0)
/**
  @Summary
    Sets the GPIO pin, RB12, high using LATB12.

  @Description
    Sets the GPIO pin, RB12, high using LATB12.

  @Preconditions
    The RB12 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB12 high (1)
    IO_RB12_SetHigh();
    </code>

*/
#define IO_RB12_SetHigh()          (_LATB12 = 1)
/**
  @Summary
    Sets the GPIO pin, RB12, low using LATB12.

  @Description
    Sets the GPIO pin, RB12, low using LATB12.

  @Preconditions
    The RB12 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB12 low (0)
    IO_RB12_SetLow();
    </code>

*/
#define IO_RB12_SetLow()           (_LATB12 = 0)
/**
  @Summary
    Toggles the GPIO pin, RB12, using LATB12.

  @Description
    Toggles the GPIO pin, RB12, using LATB12.

  @Preconditions
    The RB12 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB12
    IO_RB12_Toggle();
    </code>

*/
#define IO_RB12_Toggle()           (_LATB12 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RB12.

  @Description
    Reads the value of the GPIO pin, RB12.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB12
    postValue = IO_RB12_GetValue();
    </code>

*/
#define IO_RB12_GetValue()         _RB12
/**
  @Summary
    Configures the GPIO pin, RB12, as an input.

  @Description
    Configures the GPIO pin, RB12, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB12 as an input
    IO_RB12_SetDigitalInput();
    </code>

*/
#define IO_RB12_SetDigitalInput()  (_TRISB12 = 1)
/**
  @Summary
    Configures the GPIO pin, RB12, as an output.

  @Description
    Configures the GPIO pin, RB12, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB12 as an output
    IO_RB12_SetDigitalOutput();
    </code>

*/
#define IO_RB12_SetDigitalOutput() (_TRISB12 = 0)
/**
  @Summary
    Sets the GPIO pin, RB13, high using LATB13.

  @Description
    Sets the GPIO pin, RB13, high using LATB13.

  @Preconditions
    The RB13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB13 high (1)
    ENA2_TPS51220_SetHigh();
    </code>

*/
#define ENA2_TPS51220_SetHigh()          (_LATB13 = 1)
/**
  @Summary
    Sets the GPIO pin, RB13, low using LATB13.

  @Description
    Sets the GPIO pin, RB13, low using LATB13.

  @Preconditions
    The RB13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB13 low (0)
    ENA2_TPS51220_SetLow();
    </code>

*/
#define ENA2_TPS51220_SetLow()           (_LATB13 = 0)
/**
  @Summary
    Toggles the GPIO pin, RB13, using LATB13.

  @Description
    Toggles the GPIO pin, RB13, using LATB13.

  @Preconditions
    The RB13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB13
    ENA2_TPS51220_Toggle();
    </code>

*/
#define ENA2_TPS51220_Toggle()           (_LATB13 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RB13.

  @Description
    Reads the value of the GPIO pin, RB13.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB13
    postValue = ENA2_TPS51220_GetValue();
    </code>

*/
#define ENA2_TPS51220_GetValue()         _RB13
/**
  @Summary
    Configures the GPIO pin, RB13, as an input.

  @Description
    Configures the GPIO pin, RB13, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB13 as an input
    ENA2_TPS51220_SetDigitalInput();
    </code>

*/
#define ENA2_TPS51220_SetDigitalInput()  (_TRISB13 = 1)
/**
  @Summary
    Configures the GPIO pin, RB13, as an output.

  @Description
    Configures the GPIO pin, RB13, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB13 as an output
    ENA2_TPS51220_SetDigitalOutput();
    </code>

*/
#define ENA2_TPS51220_SetDigitalOutput() (_TRISB13 = 0)
/**
  @Summary
    Sets the GPIO pin, RB3, high using LATB3.

  @Description
    Sets the GPIO pin, RB3, high using LATB3.

  @Preconditions
    The RB3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB3 high (1)
    _25I_ADC_SetHigh();
    </code>

*/
#define _25I_ADC_SetHigh()          (_LATB3 = 1)
/**
  @Summary
    Sets the GPIO pin, RB3, low using LATB3.

  @Description
    Sets the GPIO pin, RB3, low using LATB3.

  @Preconditions
    The RB3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB3 low (0)
    _25I_ADC_SetLow();
    </code>

*/
#define _25I_ADC_SetLow()           (_LATB3 = 0)
/**
  @Summary
    Toggles the GPIO pin, RB3, using LATB3.

  @Description
    Toggles the GPIO pin, RB3, using LATB3.

  @Preconditions
    The RB3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB3
    _25I_ADC_Toggle();
    </code>

*/
#define _25I_ADC_Toggle()           (_LATB3 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RB3.

  @Description
    Reads the value of the GPIO pin, RB3.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB3
    postValue = _25I_ADC_GetValue();
    </code>

*/
#define _25I_ADC_GetValue()         _RB3
/**
  @Summary
    Configures the GPIO pin, RB3, as an input.

  @Description
    Configures the GPIO pin, RB3, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB3 as an input
    _25I_ADC_SetDigitalInput();
    </code>

*/
#define _25I_ADC_SetDigitalInput()  (_TRISB3 = 1)
/**
  @Summary
    Configures the GPIO pin, RB3, as an output.

  @Description
    Configures the GPIO pin, RB3, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB3 as an output
    _25I_ADC_SetDigitalOutput();
    </code>

*/
#define _25I_ADC_SetDigitalOutput() (_TRISB3 = 0)
/**
  @Summary
    Sets the GPIO pin, RB4, high using LATB4.

  @Description
    Sets the GPIO pin, RB4, high using LATB4.

  @Preconditions
    The RB4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB4 high (1)
    SPI_SCK_SetHigh();
    </code>

*/
#define SPI_SCK_SetHigh()          (_LATB4 = 1)
/**
  @Summary
    Sets the GPIO pin, RB4, low using LATB4.

  @Description
    Sets the GPIO pin, RB4, low using LATB4.

  @Preconditions
    The RB4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB4 low (0)
    SPI_SCK_SetLow();
    </code>

*/
#define SPI_SCK_SetLow()           (_LATB4 = 0)
/**
  @Summary
    Toggles the GPIO pin, RB4, using LATB4.

  @Description
    Toggles the GPIO pin, RB4, using LATB4.

  @Preconditions
    The RB4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB4
    SPI_SCK_Toggle();
    </code>

*/
#define SPI_SCK_Toggle()           (_LATB4 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RB4.

  @Description
    Reads the value of the GPIO pin, RB4.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB4
    postValue = SPI_SCK_GetValue();
    </code>

*/
#define SPI_SCK_GetValue()         _RB4
/**
  @Summary
    Configures the GPIO pin, RB4, as an input.

  @Description
    Configures the GPIO pin, RB4, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB4 as an input
    SPI_SCK_SetDigitalInput();
    </code>

*/
#define SPI_SCK_SetDigitalInput()  (_TRISB4 = 1)
/**
  @Summary
    Configures the GPIO pin, RB4, as an output.

  @Description
    Configures the GPIO pin, RB4, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB4 as an output
    SPI_SCK_SetDigitalOutput();
    </code>

*/
#define SPI_SCK_SetDigitalOutput() (_TRISB4 = 0)
/**
  @Summary
    Sets the GPIO pin, RB7, high using LATB7.

  @Description
    Sets the GPIO pin, RB7, high using LATB7.

  @Preconditions
    The RB7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB7 high (1)
    IO_RB7_SetHigh();
    </code>

*/
#define IO_RB7_SetHigh()          (_LATB7 = 1)
/**
  @Summary
    Sets the GPIO pin, RB7, low using LATB7.

  @Description
    Sets the GPIO pin, RB7, low using LATB7.

  @Preconditions
    The RB7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB7 low (0)
    IO_RB7_SetLow();
    </code>

*/
#define IO_RB7_SetLow()           (_LATB7 = 0)
/**
  @Summary
    Toggles the GPIO pin, RB7, using LATB7.

  @Description
    Toggles the GPIO pin, RB7, using LATB7.

  @Preconditions
    The RB7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB7
    IO_RB7_Toggle();
    </code>

*/
#define IO_RB7_Toggle()           (_LATB7 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RB7.

  @Description
    Reads the value of the GPIO pin, RB7.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB7
    postValue = IO_RB7_GetValue();
    </code>

*/
#define IO_RB7_GetValue()         _RB7
/**
  @Summary
    Configures the GPIO pin, RB7, as an input.

  @Description
    Configures the GPIO pin, RB7, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB7 as an input
    IO_RB7_SetDigitalInput();
    </code>

*/
#define IO_RB7_SetDigitalInput()  (_TRISB7 = 1)
/**
  @Summary
    Configures the GPIO pin, RB7, as an output.

  @Description
    Configures the GPIO pin, RB7, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB7 as an output
    IO_RB7_SetDigitalOutput();
    </code>

*/
#define IO_RB7_SetDigitalOutput() (_TRISB7 = 0)
/**
  @Summary
    Sets the GPIO pin, RB9, high using LATB9.

  @Description
    Sets the GPIO pin, RB9, high using LATB9.

  @Preconditions
    The RB9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB9 high (1)
    LED_ACOK_RED_SetHigh();
    </code>

*/
#define LED_ACOK_RED_SetHigh()          (_LATB9 = 1)
/**
  @Summary
    Sets the GPIO pin, RB9, low using LATB9.

  @Description
    Sets the GPIO pin, RB9, low using LATB9.

  @Preconditions
    The RB9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB9 low (0)
    LED_ACOK_RED_SetLow();
    </code>

*/
#define LED_ACOK_RED_SetLow()           (_LATB9 = 0)
/**
  @Summary
    Toggles the GPIO pin, RB9, using LATB9.

  @Description
    Toggles the GPIO pin, RB9, using LATB9.

  @Preconditions
    The RB9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB9
    LED_ACOK_RED_Toggle();
    </code>

*/
#define LED_ACOK_RED_Toggle()           (_LATB9 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RB9.

  @Description
    Reads the value of the GPIO pin, RB9.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB9
    postValue = LED_ACOK_RED_GetValue();
    </code>

*/
#define LED_ACOK_RED_GetValue()         _RB9
/**
  @Summary
    Configures the GPIO pin, RB9, as an input.

  @Description
    Configures the GPIO pin, RB9, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB9 as an input
    LED_ACOK_RED_SetDigitalInput();
    </code>

*/
#define LED_ACOK_RED_SetDigitalInput()  (_TRISB9 = 1)
/**
  @Summary
    Configures the GPIO pin, RB9, as an output.

  @Description
    Configures the GPIO pin, RB9, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB9 as an output
    LED_ACOK_RED_SetDigitalOutput();
    </code>

*/
#define LED_ACOK_RED_SetDigitalOutput() (_TRISB9 = 0)
/**
  @Summary
    Sets the GPIO pin, RC0, high using LATC0.

  @Description
    Sets the GPIO pin, RC0, high using LATC0.

  @Preconditions
    The RC0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC0 high (1)
    _12I_ADC_SetHigh();
    </code>

*/
#define _12I_ADC_SetHigh()          (_LATC0 = 1)
/**
  @Summary
    Sets the GPIO pin, RC0, low using LATC0.

  @Description
    Sets the GPIO pin, RC0, low using LATC0.

  @Preconditions
    The RC0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC0 low (0)
    _12I_ADC_SetLow();
    </code>

*/
#define _12I_ADC_SetLow()           (_LATC0 = 0)
/**
  @Summary
    Toggles the GPIO pin, RC0, using LATC0.

  @Description
    Toggles the GPIO pin, RC0, using LATC0.

  @Preconditions
    The RC0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC0
    _12I_ADC_Toggle();
    </code>

*/
#define _12I_ADC_Toggle()           (_LATC0 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RC0.

  @Description
    Reads the value of the GPIO pin, RC0.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC0
    postValue = _12I_ADC_GetValue();
    </code>

*/
#define _12I_ADC_GetValue()         _RC0
/**
  @Summary
    Configures the GPIO pin, RC0, as an input.

  @Description
    Configures the GPIO pin, RC0, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC0 as an input
    _12I_ADC_SetDigitalInput();
    </code>

*/
#define _12I_ADC_SetDigitalInput()  (_TRISC0 = 1)
/**
  @Summary
    Configures the GPIO pin, RC0, as an output.

  @Description
    Configures the GPIO pin, RC0, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC0 as an output
    _12I_ADC_SetDigitalOutput();
    </code>

*/
#define _12I_ADC_SetDigitalOutput() (_TRISC0 = 0)
/**
  @Summary
    Sets the GPIO pin, RC10, high using LATC10.

  @Description
    Sets the GPIO pin, RC10, high using LATC10.

  @Preconditions
    The RC10 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC10 high (1)
    IO_RC10_SetHigh();
    </code>

*/
#define IO_RC10_SetHigh()          (_LATC10 = 1)
/**
  @Summary
    Sets the GPIO pin, RC10, low using LATC10.

  @Description
    Sets the GPIO pin, RC10, low using LATC10.

  @Preconditions
    The RC10 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC10 low (0)
    IO_RC10_SetLow();
    </code>

*/
#define IO_RC10_SetLow()           (_LATC10 = 0)
/**
  @Summary
    Toggles the GPIO pin, RC10, using LATC10.

  @Description
    Toggles the GPIO pin, RC10, using LATC10.

  @Preconditions
    The RC10 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC10
    IO_RC10_Toggle();
    </code>

*/
#define IO_RC10_Toggle()           (_LATC10 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RC10.

  @Description
    Reads the value of the GPIO pin, RC10.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC10
    postValue = IO_RC10_GetValue();
    </code>

*/
#define IO_RC10_GetValue()         _RC10
/**
  @Summary
    Configures the GPIO pin, RC10, as an input.

  @Description
    Configures the GPIO pin, RC10, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC10 as an input
    IO_RC10_SetDigitalInput();
    </code>

*/
#define IO_RC10_SetDigitalInput()  (_TRISC10 = 1)
/**
  @Summary
    Configures the GPIO pin, RC10, as an output.

  @Description
    Configures the GPIO pin, RC10, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC10 as an output
    IO_RC10_SetDigitalOutput();
    </code>

*/
#define IO_RC10_SetDigitalOutput() (_TRISC10 = 0)
/**
  @Summary
    Sets the GPIO pin, RC11, high using LATC11.

  @Description
    Sets the GPIO pin, RC11, high using LATC11.

  @Preconditions
    The RC11 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC11 high (1)
    LED_VOUTOK_GREEN_SetHigh();
    </code>

*/
#define LED_VOUTOK_GREEN_SetHigh()          (_LATC11 = 1)
/**
  @Summary
    Sets the GPIO pin, RC11, low using LATC11.

  @Description
    Sets the GPIO pin, RC11, low using LATC11.

  @Preconditions
    The RC11 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC11 low (0)
    LED_VOUTOK_GREEN_SetLow();
    </code>

*/
#define LED_VOUTOK_GREEN_SetLow()           (_LATC11 = 0)
/**
  @Summary
    Toggles the GPIO pin, RC11, using LATC11.

  @Description
    Toggles the GPIO pin, RC11, using LATC11.

  @Preconditions
    The RC11 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC11
    LED_VOUTOK_GREEN_Toggle();
    </code>

*/
#define LED_VOUTOK_GREEN_Toggle()           (_LATC11 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RC11.

  @Description
    Reads the value of the GPIO pin, RC11.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC11
    postValue = LED_VOUTOK_GREEN_GetValue();
    </code>

*/
#define LED_VOUTOK_GREEN_GetValue()         _RC11
/**
  @Summary
    Configures the GPIO pin, RC11, as an input.

  @Description
    Configures the GPIO pin, RC11, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC11 as an input
    LED_VOUTOK_GREEN_SetDigitalInput();
    </code>

*/
#define LED_VOUTOK_GREEN_SetDigitalInput()  (_TRISC11 = 1)
/**
  @Summary
    Configures the GPIO pin, RC11, as an output.

  @Description
    Configures the GPIO pin, RC11, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC11 as an output
    LED_VOUTOK_GREEN_SetDigitalOutput();
    </code>

*/
#define LED_VOUTOK_GREEN_SetDigitalOutput() (_TRISC11 = 0)
/**
  @Summary
    Sets the GPIO pin, RC12, high using LATC12.

  @Description
    Sets the GPIO pin, RC12, high using LATC12.

  @Preconditions
    The RC12 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC12 high (1)
    IO_RC12_SetHigh();
    </code>

*/
#define IO_RC12_SetHigh()          (_LATC12 = 1)
/**
  @Summary
    Sets the GPIO pin, RC12, low using LATC12.

  @Description
    Sets the GPIO pin, RC12, low using LATC12.

  @Preconditions
    The RC12 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC12 low (0)
    IO_RC12_SetLow();
    </code>

*/
#define IO_RC12_SetLow()           (_LATC12 = 0)
/**
  @Summary
    Toggles the GPIO pin, RC12, using LATC12.

  @Description
    Toggles the GPIO pin, RC12, using LATC12.

  @Preconditions
    The RC12 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC12
    IO_RC12_Toggle();
    </code>

*/
#define IO_RC12_Toggle()           (_LATC12 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RC12.

  @Description
    Reads the value of the GPIO pin, RC12.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC12
    postValue = IO_RC12_GetValue();
    </code>

*/
#define IO_RC12_GetValue()         _RC12
/**
  @Summary
    Configures the GPIO pin, RC12, as an input.

  @Description
    Configures the GPIO pin, RC12, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC12 as an input
    IO_RC12_SetDigitalInput();
    </code>

*/
#define IO_RC12_SetDigitalInput()  (_TRISC12 = 1)
/**
  @Summary
    Configures the GPIO pin, RC12, as an output.

  @Description
    Configures the GPIO pin, RC12, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC12 as an output
    IO_RC12_SetDigitalOutput();
    </code>

*/
#define IO_RC12_SetDigitalOutput() (_TRISC12 = 0)
/**
  @Summary
    Sets the GPIO pin, RC13, high using LATC13.

  @Description
    Sets the GPIO pin, RC13, high using LATC13.

  @Preconditions
    The RC13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC13 high (1)
    IO_RC13_SetHigh();
    </code>

*/
#define IO_RC13_SetHigh()          (_LATC13 = 1)
/**
  @Summary
    Sets the GPIO pin, RC13, low using LATC13.

  @Description
    Sets the GPIO pin, RC13, low using LATC13.

  @Preconditions
    The RC13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC13 low (0)
    IO_RC13_SetLow();
    </code>

*/
#define IO_RC13_SetLow()           (_LATC13 = 0)
/**
  @Summary
    Toggles the GPIO pin, RC13, using LATC13.

  @Description
    Toggles the GPIO pin, RC13, using LATC13.

  @Preconditions
    The RC13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC13
    IO_RC13_Toggle();
    </code>

*/
#define IO_RC13_Toggle()           (_LATC13 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RC13.

  @Description
    Reads the value of the GPIO pin, RC13.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC13
    postValue = IO_RC13_GetValue();
    </code>

*/
#define IO_RC13_GetValue()         _RC13
/**
  @Summary
    Configures the GPIO pin, RC13, as an input.

  @Description
    Configures the GPIO pin, RC13, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC13 as an input
    IO_RC13_SetDigitalInput();
    </code>

*/
#define IO_RC13_SetDigitalInput()  (_TRISC13 = 1)
/**
  @Summary
    Configures the GPIO pin, RC13, as an output.

  @Description
    Configures the GPIO pin, RC13, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC13 as an output
    IO_RC13_SetDigitalOutput();
    </code>

*/
#define IO_RC13_SetDigitalOutput() (_TRISC13 = 0)
/**
  @Summary
    Sets the GPIO pin, RC4, high using LATC4.

  @Description
    Sets the GPIO pin, RC4, high using LATC4.

  @Preconditions
    The RC4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC4 high (1)
    LED_ACOK_GREEN_SetHigh();
    </code>

*/
#define LED_ACOK_GREEN_SetHigh()          (_LATC4 = 1)
/**
  @Summary
    Sets the GPIO pin, RC4, low using LATC4.

  @Description
    Sets the GPIO pin, RC4, low using LATC4.

  @Preconditions
    The RC4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC4 low (0)
    LED_ACOK_GREEN_SetLow();
    </code>

*/
#define LED_ACOK_GREEN_SetLow()           (_LATC4 = 0)
/**
  @Summary
    Toggles the GPIO pin, RC4, using LATC4.

  @Description
    Toggles the GPIO pin, RC4, using LATC4.

  @Preconditions
    The RC4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC4
    LED_ACOK_GREEN_Toggle();
    </code>

*/
#define LED_ACOK_GREEN_Toggle()           (_LATC4 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RC4.

  @Description
    Reads the value of the GPIO pin, RC4.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC4
    postValue = LED_ACOK_GREEN_GetValue();
    </code>

*/
#define LED_ACOK_GREEN_GetValue()         _RC4
/**
  @Summary
    Configures the GPIO pin, RC4, as an input.

  @Description
    Configures the GPIO pin, RC4, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC4 as an input
    LED_ACOK_GREEN_SetDigitalInput();
    </code>

*/
#define LED_ACOK_GREEN_SetDigitalInput()  (_TRISC4 = 1)
/**
  @Summary
    Configures the GPIO pin, RC4, as an output.

  @Description
    Configures the GPIO pin, RC4, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC4 as an output
    LED_ACOK_GREEN_SetDigitalOutput();
    </code>

*/
#define LED_ACOK_GREEN_SetDigitalOutput() (_TRISC4 = 0)
/**
  @Summary
    Sets the GPIO pin, RC5, high using LATC5.

  @Description
    Sets the GPIO pin, RC5, high using LATC5.

  @Preconditions
    The RC5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC5 high (1)
    LED_VOUTOK_RED_SetHigh();
    </code>

*/
#define LED_VOUTOK_RED_SetHigh()          (_LATC5 = 1)
/**
  @Summary
    Sets the GPIO pin, RC5, low using LATC5.

  @Description
    Sets the GPIO pin, RC5, low using LATC5.

  @Preconditions
    The RC5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC5 low (0)
    LED_VOUTOK_RED_SetLow();
    </code>

*/
#define LED_VOUTOK_RED_SetLow()           (_LATC5 = 0)
/**
  @Summary
    Toggles the GPIO pin, RC5, using LATC5.

  @Description
    Toggles the GPIO pin, RC5, using LATC5.

  @Preconditions
    The RC5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC5
    LED_VOUTOK_RED_Toggle();
    </code>

*/
#define LED_VOUTOK_RED_Toggle()           (_LATC5 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RC5.

  @Description
    Reads the value of the GPIO pin, RC5.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC5
    postValue = LED_VOUTOK_RED_GetValue();
    </code>

*/
#define LED_VOUTOK_RED_GetValue()         _RC5
/**
  @Summary
    Configures the GPIO pin, RC5, as an input.

  @Description
    Configures the GPIO pin, RC5, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC5 as an input
    LED_VOUTOK_RED_SetDigitalInput();
    </code>

*/
#define LED_VOUTOK_RED_SetDigitalInput()  (_TRISC5 = 1)
/**
  @Summary
    Configures the GPIO pin, RC5, as an output.

  @Description
    Configures the GPIO pin, RC5, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC5 as an output
    LED_VOUTOK_RED_SetDigitalOutput();
    </code>

*/
#define LED_VOUTOK_RED_SetDigitalOutput() (_TRISC5 = 0)
/**
  @Summary
    Sets the GPIO pin, RC6, high using LATC6.

  @Description
    Sets the GPIO pin, RC6, high using LATC6.

  @Preconditions
    The RC6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC6 high (1)
    BOOT_SetHigh();
    </code>

*/
#define BOOT_SetHigh()          (_LATC6 = 1)
/**
  @Summary
    Sets the GPIO pin, RC6, low using LATC6.

  @Description
    Sets the GPIO pin, RC6, low using LATC6.

  @Preconditions
    The RC6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC6 low (0)
    BOOT_SetLow();
    </code>

*/
#define BOOT_SetLow()           (_LATC6 = 0)
/**
  @Summary
    Toggles the GPIO pin, RC6, using LATC6.

  @Description
    Toggles the GPIO pin, RC6, using LATC6.

  @Preconditions
    The RC6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC6
    BOOT_Toggle();
    </code>

*/
#define BOOT_Toggle()           (_LATC6 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RC6.

  @Description
    Reads the value of the GPIO pin, RC6.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC6
    postValue = BOOT_GetValue();
    </code>

*/
#define BOOT_GetValue()         _RC6
/**
  @Summary
    Configures the GPIO pin, RC6, as an input.

  @Description
    Configures the GPIO pin, RC6, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC6 as an input
    BOOT_SetDigitalInput();
    </code>

*/
#define BOOT_SetDigitalInput()  (_TRISC6 = 1)
/**
  @Summary
    Configures the GPIO pin, RC6, as an output.

  @Description
    Configures the GPIO pin, RC6, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC6 as an output
    BOOT_SetDigitalOutput();
    </code>

*/
#define BOOT_SetDigitalOutput() (_TRISC6 = 0)
/**
  @Summary
    Sets the GPIO pin, RC7, high using LATC7.

  @Description
    Sets the GPIO pin, RC7, high using LATC7.

  @Preconditions
    The RC7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC7 high (1)
    _25V_ADC_SetHigh();
    </code>

*/
#define _25V_ADC_SetHigh()          (_LATC7 = 1)
/**
  @Summary
    Sets the GPIO pin, RC7, low using LATC7.

  @Description
    Sets the GPIO pin, RC7, low using LATC7.

  @Preconditions
    The RC7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC7 low (0)
    _25V_ADC_SetLow();
    </code>

*/
#define _25V_ADC_SetLow()           (_LATC7 = 0)
/**
  @Summary
    Toggles the GPIO pin, RC7, using LATC7.

  @Description
    Toggles the GPIO pin, RC7, using LATC7.

  @Preconditions
    The RC7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC7
    _25V_ADC_Toggle();
    </code>

*/
#define _25V_ADC_Toggle()           (_LATC7 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RC7.

  @Description
    Reads the value of the GPIO pin, RC7.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC7
    postValue = _25V_ADC_GetValue();
    </code>

*/
#define _25V_ADC_GetValue()         _RC7
/**
  @Summary
    Configures the GPIO pin, RC7, as an input.

  @Description
    Configures the GPIO pin, RC7, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC7 as an input
    _25V_ADC_SetDigitalInput();
    </code>

*/
#define _25V_ADC_SetDigitalInput()  (_TRISC7 = 1)
/**
  @Summary
    Configures the GPIO pin, RC7, as an output.

  @Description
    Configures the GPIO pin, RC7, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC7 as an output
    _25V_ADC_SetDigitalOutput();
    </code>

*/
#define _25V_ADC_SetDigitalOutput() (_TRISC7 = 0)
/**
  @Summary
    Sets the GPIO pin, RC8, high using LATC8.

  @Description
    Sets the GPIO pin, RC8, high using LATC8.

  @Preconditions
    The RC8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC8 high (1)
    SPI_SS_SetHigh();
    </code>

*/
#define SPI_SS_SetHigh()          (_LATC8 = 1)
/**
  @Summary
    Sets the GPIO pin, RC8, low using LATC8.

  @Description
    Sets the GPIO pin, RC8, low using LATC8.

  @Preconditions
    The RC8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC8 low (0)
    SPI_SS_SetLow();
    </code>

*/
#define SPI_SS_SetLow()           (_LATC8 = 0)
/**
  @Summary
    Toggles the GPIO pin, RC8, using LATC8.

  @Description
    Toggles the GPIO pin, RC8, using LATC8.

  @Preconditions
    The RC8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC8
    SPI_SS_Toggle();
    </code>

*/
#define SPI_SS_Toggle()           (_LATC8 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RC8.

  @Description
    Reads the value of the GPIO pin, RC8.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC8
    postValue = SPI_SS_GetValue();
    </code>

*/
#define SPI_SS_GetValue()         _RC8
/**
  @Summary
    Configures the GPIO pin, RC8, as an input.

  @Description
    Configures the GPIO pin, RC8, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC8 as an input
    SPI_SS_SetDigitalInput();
    </code>

*/
#define SPI_SS_SetDigitalInput()  (_TRISC8 = 1)
/**
  @Summary
    Configures the GPIO pin, RC8, as an output.

  @Description
    Configures the GPIO pin, RC8, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC8 as an output
    SPI_SS_SetDigitalOutput();
    </code>

*/
#define SPI_SS_SetDigitalOutput() (_TRISC8 = 0)
/**
  @Summary
    Sets the GPIO pin, RC9, high using LATC9.

  @Description
    Sets the GPIO pin, RC9, high using LATC9.

  @Preconditions
    The RC9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC9 high (1)
    SPI_MISO_SetHigh();
    </code>

*/
#define SPI_MISO_SetHigh()          (_LATC9 = 1)
/**
  @Summary
    Sets the GPIO pin, RC9, low using LATC9.

  @Description
    Sets the GPIO pin, RC9, low using LATC9.

  @Preconditions
    The RC9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC9 low (0)
    SPI_MISO_SetLow();
    </code>

*/
#define SPI_MISO_SetLow()           (_LATC9 = 0)
/**
  @Summary
    Toggles the GPIO pin, RC9, using LATC9.

  @Description
    Toggles the GPIO pin, RC9, using LATC9.

  @Preconditions
    The RC9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC9
    SPI_MISO_Toggle();
    </code>

*/
#define SPI_MISO_Toggle()           (_LATC9 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RC9.

  @Description
    Reads the value of the GPIO pin, RC9.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC9
    postValue = SPI_MISO_GetValue();
    </code>

*/
#define SPI_MISO_GetValue()         _RC9
/**
  @Summary
    Configures the GPIO pin, RC9, as an input.

  @Description
    Configures the GPIO pin, RC9, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC9 as an input
    SPI_MISO_SetDigitalInput();
    </code>

*/
#define SPI_MISO_SetDigitalInput()  (_TRISC9 = 1)
/**
  @Summary
    Configures the GPIO pin, RC9, as an output.

  @Description
    Configures the GPIO pin, RC9, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC9 as an output
    SPI_MISO_SetDigitalOutput();
    </code>

*/
#define SPI_MISO_SetDigitalOutput() (_TRISC9 = 0)
/**
  @Summary
    Sets the GPIO pin, RD1, high using LATD1.

  @Description
    Sets the GPIO pin, RD1, high using LATD1.

  @Preconditions
    The RD1 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD1 high (1)
    EN1_TPS51220_SetHigh();
    </code>

*/
#define EN1_TPS51220_SetHigh()          (_LATD1 = 1)
/**
  @Summary
    Sets the GPIO pin, RD1, low using LATD1.

  @Description
    Sets the GPIO pin, RD1, low using LATD1.

  @Preconditions
    The RD1 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD1 low (0)
    EN1_TPS51220_SetLow();
    </code>

*/
#define EN1_TPS51220_SetLow()           (_LATD1 = 0)
/**
  @Summary
    Toggles the GPIO pin, RD1, using LATD1.

  @Description
    Toggles the GPIO pin, RD1, using LATD1.

  @Preconditions
    The RD1 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RD1
    EN1_TPS51220_Toggle();
    </code>

*/
#define EN1_TPS51220_Toggle()           (_LATD1 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RD1.

  @Description
    Reads the value of the GPIO pin, RD1.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RD1
    postValue = EN1_TPS51220_GetValue();
    </code>

*/
#define EN1_TPS51220_GetValue()         _RD1
/**
  @Summary
    Configures the GPIO pin, RD1, as an input.

  @Description
    Configures the GPIO pin, RD1, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD1 as an input
    EN1_TPS51220_SetDigitalInput();
    </code>

*/
#define EN1_TPS51220_SetDigitalInput()  (_TRISD1 = 1)
/**
  @Summary
    Configures the GPIO pin, RD1, as an output.

  @Description
    Configures the GPIO pin, RD1, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD1 as an output
    EN1_TPS51220_SetDigitalOutput();
    </code>

*/
#define EN1_TPS51220_SetDigitalOutput() (_TRISD1 = 0)
/**
  @Summary
    Sets the GPIO pin, RD10, high using LATD10.

  @Description
    Sets the GPIO pin, RD10, high using LATD10.

  @Preconditions
    The RD10 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD10 high (1)
    IO_RD10_SetHigh();
    </code>

*/
#define IO_RD10_SetHigh()          (_LATD10 = 1)
/**
  @Summary
    Sets the GPIO pin, RD10, low using LATD10.

  @Description
    Sets the GPIO pin, RD10, low using LATD10.

  @Preconditions
    The RD10 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD10 low (0)
    IO_RD10_SetLow();
    </code>

*/
#define IO_RD10_SetLow()           (_LATD10 = 0)
/**
  @Summary
    Toggles the GPIO pin, RD10, using LATD10.

  @Description
    Toggles the GPIO pin, RD10, using LATD10.

  @Preconditions
    The RD10 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RD10
    IO_RD10_Toggle();
    </code>

*/
#define IO_RD10_Toggle()           (_LATD10 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RD10.

  @Description
    Reads the value of the GPIO pin, RD10.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RD10
    postValue = IO_RD10_GetValue();
    </code>

*/
#define IO_RD10_GetValue()         _RD10
/**
  @Summary
    Configures the GPIO pin, RD10, as an input.

  @Description
    Configures the GPIO pin, RD10, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD10 as an input
    IO_RD10_SetDigitalInput();
    </code>

*/
#define IO_RD10_SetDigitalInput()  (_TRISD10 = 1)
/**
  @Summary
    Configures the GPIO pin, RD10, as an output.

  @Description
    Configures the GPIO pin, RD10, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD10 as an output
    IO_RD10_SetDigitalOutput();
    </code>

*/
#define IO_RD10_SetDigitalOutput() (_TRISD10 = 0)
/**
  @Summary
    Sets the GPIO pin, RD13, high using LATD13.

  @Description
    Sets the GPIO pin, RD13, high using LATD13.

  @Preconditions
    The RD13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD13 high (1)
    IO_RD13_SetHigh();
    </code>

*/
#define IO_RD13_SetHigh()          (_LATD13 = 1)
/**
  @Summary
    Sets the GPIO pin, RD13, low using LATD13.

  @Description
    Sets the GPIO pin, RD13, low using LATD13.

  @Preconditions
    The RD13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD13 low (0)
    IO_RD13_SetLow();
    </code>

*/
#define IO_RD13_SetLow()           (_LATD13 = 0)
/**
  @Summary
    Toggles the GPIO pin, RD13, using LATD13.

  @Description
    Toggles the GPIO pin, RD13, using LATD13.

  @Preconditions
    The RD13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RD13
    IO_RD13_Toggle();
    </code>

*/
#define IO_RD13_Toggle()           (_LATD13 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RD13.

  @Description
    Reads the value of the GPIO pin, RD13.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RD13
    postValue = IO_RD13_GetValue();
    </code>

*/
#define IO_RD13_GetValue()         _RD13
/**
  @Summary
    Configures the GPIO pin, RD13, as an input.

  @Description
    Configures the GPIO pin, RD13, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD13 as an input
    IO_RD13_SetDigitalInput();
    </code>

*/
#define IO_RD13_SetDigitalInput()  (_TRISD13 = 1)
/**
  @Summary
    Configures the GPIO pin, RD13, as an output.

  @Description
    Configures the GPIO pin, RD13, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD13 as an output
    IO_RD13_SetDigitalOutput();
    </code>

*/
#define IO_RD13_SetDigitalOutput() (_TRISD13 = 0)
/**
  @Summary
    Sets the GPIO pin, RD8, high using LATD8.

  @Description
    Sets the GPIO pin, RD8, high using LATD8.

  @Preconditions
    The RD8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD8 high (1)
    SPI_MOSI_SetHigh();
    </code>

*/
#define SPI_MOSI_SetHigh()          (_LATD8 = 1)
/**
  @Summary
    Sets the GPIO pin, RD8, low using LATD8.

  @Description
    Sets the GPIO pin, RD8, low using LATD8.

  @Preconditions
    The RD8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD8 low (0)
    SPI_MOSI_SetLow();
    </code>

*/
#define SPI_MOSI_SetLow()           (_LATD8 = 0)
/**
  @Summary
    Toggles the GPIO pin, RD8, using LATD8.

  @Description
    Toggles the GPIO pin, RD8, using LATD8.

  @Preconditions
    The RD8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RD8
    SPI_MOSI_Toggle();
    </code>

*/
#define SPI_MOSI_Toggle()           (_LATD8 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RD8.

  @Description
    Reads the value of the GPIO pin, RD8.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RD8
    postValue = SPI_MOSI_GetValue();
    </code>

*/
#define SPI_MOSI_GetValue()         _RD8
/**
  @Summary
    Configures the GPIO pin, RD8, as an input.

  @Description
    Configures the GPIO pin, RD8, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD8 as an input
    SPI_MOSI_SetDigitalInput();
    </code>

*/
#define SPI_MOSI_SetDigitalInput()  (_TRISD8 = 1)
/**
  @Summary
    Configures the GPIO pin, RD8, as an output.

  @Description
    Configures the GPIO pin, RD8, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD8 as an output
    SPI_MOSI_SetDigitalOutput();
    </code>

*/
#define SPI_MOSI_SetDigitalOutput() (_TRISD8 = 0)

/**
    Section: Function Prototypes
*/
/**
  @Summary
    Configures the pin settings of the dsPIC33CH256MP505
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description
    This is the generated manager file for the PIC24 / dsPIC33 / PIC32MM MCUs device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    void SYSTEM_Initialize(void)
    {
        // Other initializers are called from this function
        PIN_MANAGER_Initialize();
    }
    </code>

*/
void PIN_MANAGER_Initialize (void);



#endif
