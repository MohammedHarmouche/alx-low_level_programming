#include "main.h"

/**
*print_sign - (+ if 1), (0 if 0), (- if < 0)
*
* @n: Number to be tested
*
*Return: return the sign
*
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
