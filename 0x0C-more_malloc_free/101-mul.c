#include <stdio.h>
#include <stdlib.h>

/**
* is_digit - Check if a string is composed of digits.
* @str: The string to check
*
* Return: 1 if all characters are digits, 0 otherwise.
*/
int is_digit(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}

/**
* main - Entry point of the program.
* @argc: Number of command-line arguments.
* @argv: Array of command-line argument strings.
*
* Return: 0 on success, 98 on incorrect number of arguments or non-digit input.
*/
int main(int argc, char *argv[])
{
int num1, num2;

if (argc != 3)
{
printf("Error\n");
return (98);
}

if (!is_digit(argv[1]) || !is_digit(argv[2]))
{
printf("Error\n");
return (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

printf("%d\n", num1 *num2);

return (0);
}
