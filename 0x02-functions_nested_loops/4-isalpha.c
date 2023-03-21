#include "main.h"
/**
* _isalpha - check if the given character is lower case.
*
* @c: The character code in ascii
*
* Return: 1 (True) else 0 (False)
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 98))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
