#include <stdio.h>
#include <stdlib.h>

/**
   * main - multiply two numbers
    * @argc: the number of arguments
     * @argv: arguments entered
       * Return: 0
	*/
int main(int argc, char *argv[])
{
	int n1, n2;
	char *s1 = argv[1];
	char *s2 = argv[2];

	n1 = n2 = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (s1[0] == '-')
	{
		n1 = -1 * atoi(&s1[1]);
	}
	else
	{
		n1 = atoi(&s1[0]);
	}
	if (s2[0] == '-')
	{
		n2 = -1 * atoi(&s2[1]);
	}
	else
	{
		n2 = atoi(&s2[0]);
	}
	printf("%d\n", n1 * n2);
	return (0);
}
