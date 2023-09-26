#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint_safe - prints a listint_t linked list to avoid infinite loops
* @head: pointer to the head of the linked list
*
* Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *current = head;
const listint_t *test = NULL;
int flag = 0;

while (current != NULL)
{
if (flag == 0)
{
test = current;
printf("[%p] %d\n", (void *)current, current->n);
}
if (flag == 1)
{
if (test <= current)
{
printf("-> [%p] %d\n", (void *)current, current->n);
return (count);
}
printf("[%p] %d\n", (void *)current, current->n);
}
count += 1;
test = current;
current = current->next;
flag = 1;
}
return (count);
}
