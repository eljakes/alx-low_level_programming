#include "main.h"
#include <stddef.h>

/**
* print_binary - Prints the binary representation of a decimal number.
* @n: The decimal number to be converted and printed.
*
* Description: This function converts a decimal number to binary and prints it.
* It does not use division or modulus operations.
*
* Return: No return value.
*/
void print_binary(unsigned long int n)
{
	int flag = 0;
	unsigned long int mask = 1;

	mask <<= 63;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) == 0 && flag == 1)
			_putchar('0');
		if ((n & mask) != 0)
		{
			_putchar('1');
			flag = 1;
		}

		mask >>= 1;
	}
}
