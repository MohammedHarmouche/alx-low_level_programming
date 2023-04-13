#include "main.h"
#include <stdlib.h>

/**
   * string_nconcat - concatinates two strings
    * @s1: first string.
     * @s2: second string.
      * @n: amount of bytes.
       *
	*Return: concatinated string
	 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *va;

	unsigned int i, j, len = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	if (j > n)
	{
		j = n;
	}

	va = malloc(sizeof(char) * (i + j + 1));

	if (va == NULL)
	{
		return (NULL);
	}
	for (len = 0; len < i; len++)
	{
		va[len] = s1[len];
	}

	for (len = 0; len < j; len++)
	{
		va[len + i] = s2[len];
	}
	va[i + j] = '\0';
	return (va);
}
