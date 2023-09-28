#include "main.h"
#include <stddef.h>

/**
* set_bit - Sets a bit at a given index to 1.
* @n: A pointer to the number to modify.
* @index: The index of the bit to set (0-indexed).
*
* Description: This function sets the bit at the specified index to 1 in the
* provided unsigned long integer.
*
* Return: 1 if successful, -1 if an error occurs.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63) /* Ensure index is within a valid range (0-63) */
		return (-1);

	*n |= (1 << index); /* Set the bit at the specified index to 1 */

	return (1);
}
