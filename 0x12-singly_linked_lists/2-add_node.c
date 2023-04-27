#include "lists.h"
#include<string.h>

/**
   * add_node - appends a node to the head
    * @head: address to a node list_t
     * @str: a string to add to the lists content
      *
       * Return: pointer to a list_t.
        */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *nptr;

	nptr = malloc(sizeof(list_t));
	if (nptr == NULL)
	{
		return (NULL);
	}

	dup = strdup(str);
	if (dup == NULL)
	{
		free(nptr);
		return (NULL);
	}
	for (len = 0; str[len]; len++)
	{
		;
	}

	nptr->str = dup;
	nptr->len = len;
	nptr->next = *head;
	*head = nptr;
	
	return (nptr);
}
