#include "main.h"
/**
   *swap_int- interchanges a and b
    *@a:integer to swap
     *@b: integer to swap
      */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;

	*a = *b;

	*b = swap;
}
