#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
int length = 0;
while (*s)
{
length++;
s++;
}
return (length);
}

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The input string.
 */

void puts_half(char *str)
{
int length = _strlen(str);
int start;

if (length % 2 == 0)
{
start = length / 2;
}
else
{
start = (length - 1) / 2;
}

while (str[start] != '\0')
{
_putchar(str[start]);
start++;
}

_putchar('\n');
}
