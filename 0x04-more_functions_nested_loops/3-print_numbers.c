#include "main.h"

/**
   * print_numbers - print 0123456789
    *
     * Return: void
      */

void print_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
