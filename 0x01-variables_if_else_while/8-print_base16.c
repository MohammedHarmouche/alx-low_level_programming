#include <stdio.h>

/**
   * main - entry point
    * Return: always 0 (success)
     */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + 48);
	}
	for (num = 0; num < 6; num++)
	{
		putchar(num + 97);
	}
	putchar('\n');
	return (0);
}
