#include "cobs.h"
#include "main.h"

/** COBS encode data to buffer
	@param data Pointer to input data to encode
	@param length Number of bytes to encode
	@param buffer Pointer to encoded output buffer
	@return Encoded buffer length in bytes
	@note Does not output delimiter byte
*/

size_t cobsEncode(volatile uint8_t *data, size_t length, volatile uint8_t *buffer) {

    volatile uint8_t *encode = buffer; // Encoded byte pointer
    volatile uint8_t *codep = encode++; // Output code pointer
    volatile uint8_t code = 1; // Code value
    volatile uint8_t *byte;
    

    for (byte = data; length--; ++byte) {
        if (*byte) // Byte not zero, write it
            *encode++ = *byte, ++code;

        if (!*byte) // Input is zero ** don't need to test for completed block never big, or block completed, restart
        {
            *codep = code, code = 1, codep = encode;
            if (!*byte || length)
                ++encode;
        }
    }
    *codep = code; // Write final code value

    return (size_t) (encode - buffer);
}

/** COBS decode data from buffer
	@param buffer Pointer to encoded input bytes
	@param length Number of bytes to decode
	@param data Pointer to decoded output data
	@return Number of bytes successfully decoded
	@note Stops decoding if delimiter byte is found
*/

size_t cobsDecode(volatile uint8_t *buffer, size_t length, volatile uint8_t *data) {

    volatile uint8_t *byte = buffer; // Encoded input byte pointer
    uint8_t *decode = (uint8_t *) data; // Decoded output byte pointer
    uint8_t code;
    int8_t block;

    for (code = 0xff, block = 0; byte < buffer + length; --block) {
        if (block) // Decode block byte
            *decode++ = *byte++;
        else {
            if (code != 0xff) // Encoded zero, write it
                *decode++ = 0;
            block = code = *byte++; // Next block length
			if (!code) // Delimiter code found
				break;
		}
	}

	return (size_t)(decode - (uint8_t *)data);
}
