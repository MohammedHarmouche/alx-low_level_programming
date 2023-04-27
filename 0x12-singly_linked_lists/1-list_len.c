#include "lists.h"

/**
   *list_len- counts number of nodes
    *@h:ptr to the starting of the list
      *Return: the amount of elements in the list
       */

size_t list_len(const list_t *h)
{
	size_t c;

	c = 0;
	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
