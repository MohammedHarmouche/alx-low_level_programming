#include "lists.h"

/**
   * insert_nodeint_at_index - function that inserts a new node
    * @head: pointer of pointer to a listint_t
      * @idx: index of the list where the new node should be added
	* @n: value to set the new node
	 * Return: the address of the new node
	  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *current;
	unsigned int pos;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		pos = 0;
		current = *head;
		while (pos  < (idx - 1))
		{
			if (current == NULL)
			{
				free(new);
				return (NULL);
			}
			current = current->next;
			pos++;
		}
		new->next = current->next;
		current->next = new;
	}
	new->n = n;
	return (new);
}
