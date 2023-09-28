#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 *
 * @n : pointer to the valu to set to 1
 * @index : the position to be set
 *
 * Return: the seted value
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (index == 0)
		*n += 1;
	*n += (2 << (index - 1));
	return (1);
}
