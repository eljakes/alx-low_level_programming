#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - deletes the head node from a listint_t linked list
* @head: pointer to a pointer to the head of the linked list
*
* Return: data that was in the deleted node, or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
int data_ret = 0;
listint_t *tmp;

if (head == NULL || *head == NULL)
return (0);

tmp = *head;
data_ret = tmp->n;
*head = tmp->next;

free(tmp);

return (data_ret);
}
