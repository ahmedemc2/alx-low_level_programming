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
	unsigned long int x = 0;

	if (index >= sizeof(n) * 8)
		return (-1);

	n = n >> index;
	x = n & 1;
	return (x);
}
