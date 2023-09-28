#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * b: the binary number in char
 *
 * Return : the number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, i = 0, n = 0;

	if (b)
	{
		for (i = 0; b[i] != '\0'; i++)
			;
		while (*(b + n) != '\0' && i >= 0)
		{
			if (*(b + n) != '1' && *(b + n) != '0')
				return (0);
			sum += (*(b + n) == '1') ? (2 << i - 1) / 2 : 0;
			i--;
			n++;
		}
	}
	return (sum);
}
