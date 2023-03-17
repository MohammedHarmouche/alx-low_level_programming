#include <stdio.h>
/**
   * main -  program that prints all possible combinations of single-digit
    * separated by ,followed by a space
     * Return: 0
      */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
