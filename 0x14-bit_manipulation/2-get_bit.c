#include "main.h"

/**
   * get_bit - function that returns the value of a bit at a given index.
    * @n: number to scan.
     * @index: bit to return.
       * Return: Bit (0 | 1)
	*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	bit = (n >> index) & 1;

	return (bit);
}
