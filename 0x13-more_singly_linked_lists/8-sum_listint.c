#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* sum_listint - calculates the sum of all data value in a listint_t linked list
* @head: pointer to the head of the linked list
*
* Return: sum of all data values, or 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current = head;

while (current != NULL)
{
sum += current->n;
current = current->next;
}

return (sum);
}
