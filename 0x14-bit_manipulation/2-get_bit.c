#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 *
 * @n : the number to git his bit
 * @index : the index of the bit
 *
 * Return: the bit value
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	unsigned long int x = 0;

	if (index >= sizeof(n) * 8)
		return (-1);

	for (i = 0; i < index; i++)
	{
		n = n >> 1;
		x = (n % 2);
	}
	return (x);
}
