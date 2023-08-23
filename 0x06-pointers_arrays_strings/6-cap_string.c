#include "main.h"
#include <stdbool.h> /* for using the bool type */

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */

char *cap_string(char *str)
{
int i = 0;
bool new_word = true;

while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
/*Capitalize the first letter of a new word*/
if (new_word)
{
str[i] = str[i] - 'a' + 'A';
new_word = false;
}
}
else
{
/*Set new_word to true if current character is a separator*/
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
new_word = true;
}
}

i++;
}

return (str);
}
