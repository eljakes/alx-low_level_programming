#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - deletes a node at a index in a listint_t linkd list
* @head: pointer to a pointer to the head of the linked list
* @index: index of the node to be deleted
*
* Return: 1 if successful, -1 on failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int count = 0;
listint_t *current, *eraser;

if (head == NULL || *head == NULL)
return (-1);

current = *head;

if (index == 0)
{
*head = current->next;
free(current);
return (1);
}

while (current != NULL && count < index - 1)
{
current = current->next;
count++;
}

if (current == NULL || current->next == NULL)
return (-1);

eraser = current->next->next;
free(current->next);
current->next = eraser;

return (1);
}
