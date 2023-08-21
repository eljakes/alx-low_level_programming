#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * main - Generates a random valid password for 101-crackme.
 *
 * Return: Always 0.
 */

int main(void)
{
char password[PASSWORD_LENGTH + 1]; /* +1 for null terminator */
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

srand(time(NULL)); /* Seed the random number generator with current time */

for (int i = 0; i < PASSWORD_LENGTH; i++)
{
int index = rand() % (sizeof(charset) - 1); /* Generate random index */
password[i] = charset[index]; /* Add character to password */
}
password[PASSWORD_LENGTH] = '\0'; /* Null-terminate the password */

printf("%s\n", password);

return (0);
}
