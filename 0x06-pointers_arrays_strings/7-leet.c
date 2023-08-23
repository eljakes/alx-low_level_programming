#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */

char *leet(char *str)
{
char *letters = "aeotlAEOTL"; /* Letters to be replaced */
char *leet_codes = "430710";   /* Corresponding 1337 codes */
int i, j;

i = 0;
while (str[i] != '\0')
{
j = 0;
while (letters[j] != '\0')
{
if (str[i] == letters[j])
{
str[i] = leet_codes[j];
break; /* Break the inner loop once a replacement is made */
}
j++;
}
i++;
}

return (str);
}
