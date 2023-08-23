#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer
 * @b: The buffer to be printed
 * @size: The number of bytes to print from the buffer
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
int i, j;

for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);

for (j = 0; j < 10; j++)
{
if (i + j < size)
printf("%02x", (unsigned char)b[i + j]);
else
printf("  ");

if (j % 2 == 1)
printf(" ");
}

for (j = 0; j < 10; j++)
{
if (i + j < size)
{
if (b[i + j] >= ' ' && b[i + j] <= '~')
putchar(b[i + j]);
else
putchar('.');
}
else
{
putchar(' ');
}
}

putchar('\n');
}
}
