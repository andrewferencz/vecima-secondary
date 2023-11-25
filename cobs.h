#ifndef COBS_H
#define	COBS_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stddef.h>
#include <stdint.h>

size_t cobsEncode(volatile uint8_t *, size_t, volatile uint8_t *);
size_t cobsDecode(volatile uint8_t *, size_t, volatile uint8_t *);

#endif	/* XC_HEADER_TEMPLATE_H */

