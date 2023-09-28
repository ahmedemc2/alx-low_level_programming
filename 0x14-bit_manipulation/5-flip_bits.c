#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another
 *
 * @n: the first number
 * @m: the number to flip bits to get it
 *
 * Return: the number of bit to be fliped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned int count = 0;

	i = n ^ m;
	while (i > 0)
	{
		count++;
		i &= (i - 1);
	}
	return (count);
}
