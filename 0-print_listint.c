#include "list.h"
#include <stdio.h>

/**
 * print_listen - Prints all the element of a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
size_t node = 0;

while (h)
{
nodes++;
printf("%d\n", h->n);
h = h->next;
}

return (nodes);
}
