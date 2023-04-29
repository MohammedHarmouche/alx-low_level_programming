#include "lists.h"

/**
   * free_listint - frees all the node in a list.
    * @head: pointer to a list.
     */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
