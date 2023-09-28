#include "main.h"
#include <stddef.h>
/**
* clear_bit - Clears a bit at a given index to 0.
* @n: A pointer to the number to modify.
* @index: The index of the bit to clear (0-indexed).
*
* Description: This function clears (sets to 0) the bit at the specified index
* in the provided unsigned long integer.
*
* Return: 1 if successful, -1 if an error occurs.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63) /* Ensure index is within a valid range (0-63) */
		return (-1);

	*n &= ~(1UL << index); /* Clear the bit at the specified index */

	return (1);
}
