#include "main.h"
#include <stddef.h>

/**
* flip_bits - Counts the number of bits that need to be flipped.
* @n: The first unsigned long integer.
* @m: The second unsigned long integer.
*
* Description: This function calculates the number of bits that need to be
* flipped in order to change the first unsigned long integer into the second.
*
* Return: The number of different bits between the two numbers.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
