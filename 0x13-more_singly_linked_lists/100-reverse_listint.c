#include "lists.h"
#include <stdio.h>

/**
   * reverse_listint - reverse a list.
    * @head: pointer of a pointer to a list.
     *
      * Return: pointer to list.
       */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode;
	listint_t *nextnode;

	prevnode = NULL;
	while (*head != NULL)
	{
		nextnode = (*head)->next;
		(*head)->next = prevnode;
		prevnode = *head;
		*head = nextnode;
	}

	*head = prevnode;
	return (*head);
}
