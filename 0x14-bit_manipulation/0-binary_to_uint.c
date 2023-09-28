#include "main.h"
#include <stddef.h>

/**
* binary_to_uint - Converts binary string to an unsigned integer.
* @b: The binary number in string format.
*
* Return: The converted decimal number, or 0 if there are non-binary.
*         in the input string or if the string is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int base = 1;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	i--;

	while (i >= 0)
	{
		if (b[i] == '1')
			result += base;

		base *= 2;
		i--;
	}

	return (result);
}
