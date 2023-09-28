#include "main.h"
#include <stddef.h>

/**
* get_bit - Gets the value of a bit at a given index.
* @n: The number from which to extract the bit.
* @index: The index of the bit to retrieve (0-indexed).
*
* Description: This function returns the value of the bit at a specified
* index in the binary representation of the given number.
*
* Return: The value of the bit at the specified index, or -1 if an error occur.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
