#include "lists.h"

/**
   * listint_len - returns the count of a nodes;
    * @h: pointer to the head of a list.
     *
      * Return: the amount of elements in the list.
       */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
