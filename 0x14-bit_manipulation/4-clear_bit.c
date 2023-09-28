#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 *
 * @n : pointer to the value tobe set the bit indexed to 0
 * @index : the position to be set to 0
 *
 * Return: 1 if it worked, -1 if not
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 2 << (index - 1);

	if (index >= sizeof(n) * 8)
		return (-1);
	if (index == 0 && *n >= 1)
		*n -= 1;
	if (*n == 0)
		return (0);
	*n -= x;
	return (1);
}
