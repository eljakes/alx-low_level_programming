#include <stddef.h>
#include "lists.h"

/**
* list_len - count the number of nodes in a singly linked list
* @h: pointer to the head of the list
*
* Return: number of nodes
*/
size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
h = h->next;
count++;
}

return (count);
}
