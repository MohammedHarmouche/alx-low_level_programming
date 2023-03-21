#include "main.h"

/**
* print_last_digit - print the last digit
*
* @n: Number used to find the last digit
*
* Return: last digit
*/
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}

