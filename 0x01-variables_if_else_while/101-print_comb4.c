#include <stdio.h>
/**
   * main - Entry point
     * Return: Always 0
      */

int main(void)
{
	int n;
	int m;
	int o;

	for (m = 0 ; m < 8 ; m++)
	{
		for (n = m + 1 ; n < 9 ; n++)
		{
			for (o = n + 1 ; o < 10 ; o++)
			{
				putchar('0' + m);
				putchar('0' + n);
				putchar('0' + o);
				if (m != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
