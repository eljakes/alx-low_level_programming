#include "main.h"
#include <stddef.h>

/**
* get_endianness - Determines the endianness of the architecture.
*
* Description: This function determines whether the architecture is
* little-endian or big-endian by checking the byte order of an unsigned
* integer.
*
* Return:
* - 1 if the architecture is little-endian.
* - 0 if the architecture is big-endian.
*/
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c == 1) /* Check the value at the lowest memory address */
		return (1); /* Little-endian */
	else
		return (0); /* Big-endian */
}
