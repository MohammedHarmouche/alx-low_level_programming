#include "lists.h"

/**
   * free_list - frees the memory of a list.
     * @head: pointer to a list.
	*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
