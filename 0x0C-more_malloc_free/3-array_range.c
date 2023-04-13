#include "main.h"
#include <stdlib.h>

/**
   *array_range- cretes array of integer
    *@max: last value of the array
     *@min: first value of the array
      *Return: NULL if min > max and if array equall to NULL
       *        otherwise an array
        */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		ar[i] = min;
	}
	return (ar);
}
