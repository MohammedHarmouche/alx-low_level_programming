#include "main.h"
/**
   *puts2- print skip one number
    *@str:input
     *Return:print
      */
void puts2(char *str)
{

	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
