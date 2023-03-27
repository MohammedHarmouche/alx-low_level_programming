#include "main.h"
/**
   *_puts- prints out to stdout with new line
    *@str: checked
     */
void _puts(char *str)
{
	if (str)
	{
		while (*str)
		{
			_putchar(*str++);
		}
	}
	_putchar('\n');
}
