#include "lists.h"

/**
   * pop_listint - delete the head node and return it's value.
    * @head: pointer of a pointer to a listint_t
     *
      * Return: value of the delete node (INT)
       */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *t;

	if (*head == NULL)
	{
		return (0);
	}

	t = *head;
	value = (*head)->n;
	*head = (*head)->next;
	free(t);

	return (value);
}
