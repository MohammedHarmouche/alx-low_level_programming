#include <stdio.h>

/**
   *main- prints all argument
     *@argc: the number of arguments
      *@argv: arguments entered
       *Return: 0
	*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
