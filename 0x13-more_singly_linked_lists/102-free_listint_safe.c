#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
* free_listint_safe - Frees a listint_t list.
* @h: A pointer to the head of the list.
*
* Return: The size of the list that was freed.
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *next;
size_t size = 0;

if (h == NULL || *h == NULL)
return (0);

current = *h;
*h = NULL;

while (current)
{
size++;
next = current->next;
free(current);
if (current <= next)
break;
current = next;
}

return (size);
}
