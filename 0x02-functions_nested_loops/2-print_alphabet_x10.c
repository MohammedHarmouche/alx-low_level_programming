#include "main.h"

/**
   * print_alphabet_x10 - write the the lower-case alphabet on a line.
    *
     */
void print_alphabet_x10(void)
{
	char x;
	int i;

	for (i = 0; i < 10 ; i++)
	{
		for (x = 97; x <= 122; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
