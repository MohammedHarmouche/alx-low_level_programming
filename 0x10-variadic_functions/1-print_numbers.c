#include "variadic_functions.h"

/**
   *print_numbers- print numbers
    *@separator: string to be peinted between numbers
     *@n: numbers
      */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;

	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d",  va_arg(valist, int));
		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}

	}

	printf("\n");
	va_end(valist);
}
