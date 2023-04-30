#include "lists.h"

/**
   * delete_nodeint_at_index - function that deletes the node at index
     * @head: poiter of pointer to a head of a list.
       * @index: position of node to delete.
		* Return: 1 (success) else -1 on fail.
	     */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *temp;
	unsigned int pos;

	if (head == NULL)
	{
		return (-1);
	}
	if (*head == NULL)
	{
		return (-1);
	}
	current = *head;
	pos = 0;
	if (index == 0)
	{
		*head = (*head)->next;
	}
	else
	{
		while (pos < (index - 1))
		{
			if (current == NULL)
			{
				return (-1);
			}
				current = current->next;
				pos++;
		}
		temp = current;
		current = current->next;
		temp->next = current == NULL ? NULL : current->next;
	}
	free(current);
	return (1);
}
