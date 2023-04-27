#include "lists.h"
#include <stdio.h>

/**
   *print_list- function that list all elements of list_t
     *@h: list_t
      *Return: the number of nodes in h
       */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		n++;
		h = h->next;
	}
	return (n);
}
