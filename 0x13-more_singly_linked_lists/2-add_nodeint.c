#include "lists.h"

/**
   *add_nodeint - add a new node at the head of a list
     *@head: pointer of a pointer to a list
      *@n: value to set the new list to
	*Return: pointer to a pointer of listint_t
	 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}
