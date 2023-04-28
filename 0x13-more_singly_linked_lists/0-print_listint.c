#include "lists.h"
#include <stdio.h>

/**
   *print_listint - list all elements of list
    *@h: The listint_t list
      *Return: number of elements in a list
       */

size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
