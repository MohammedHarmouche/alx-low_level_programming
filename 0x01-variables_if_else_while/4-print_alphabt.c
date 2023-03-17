#include <stdio.h>

/**
   * main - entry point
    * Return: always 0 (success)
     */

int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		if (n == 101 || n == 113)
		{
			n++;
		}
		putchar(n);
	}
	putchar('\n');
	return (0);
}
