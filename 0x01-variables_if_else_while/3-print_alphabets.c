#include <stdio.h>

/**
   * main - entry point
    * Return: always 0 (success)
     */

int main(void)
{
	int n;
	int m;

	for (n = 97; n <= 122; n++)
	{
		putchar(n);
	}
	for (m = 65; m <= 90; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
