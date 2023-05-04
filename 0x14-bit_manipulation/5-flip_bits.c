#include "main.h"

/**
   * flip_bits - function that returns the number of bits you would need
    * to flip to get from one number to another.
     * @n: starting
      * @m: target
	* Return: number bits flipped
	 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r;
	unsigned int count;

	count = 0;
	r = n ^ m;
	while (r != 0)
	{
		if ((r & 1) == 1)
		{
			count++;
		}
		r = r >> 1;
	}
	return (count);
}
