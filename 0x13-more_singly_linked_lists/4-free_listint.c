#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_listint - frees a listint_t linked list
* @head: pointer to the head of the linked list
*/
void free_listint(listint_t *head)
{
if (head == NULL)
return;

if (head->next != NULL)
{
free_listint(head->next);
}

free(head);
}

