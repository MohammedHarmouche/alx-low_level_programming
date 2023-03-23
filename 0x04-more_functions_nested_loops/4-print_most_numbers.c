#include "main.h"

/**
   * print_most_numbers - print 0-9 excluding 2 and 4
    *
     * Return: nothing
      **/

void print_most_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		if ((i == 50) || (i == 52))
		{
			i++;
		}
		_putchar(i);
	}
	_putchar('\n');
}
