#include "main.h"

/**
 * print_most_numbers - entry point
 *
 * Description: function that prints the numbers, from 0 to 9
 * except 2 and 4
 *
 * Return : nothing
*/

void print_most_numbers(void)
{
	int i, j = 0, k;

	for (k = 0; k < 10 ; k++)
	{
		for (i = 48 ; i <= 57 ; i++)
		{
			if (j < 15)
			{
				if (j < 9)
					_putchar(49);
				_putchar(i);
				j++;
				if (j == 10)
					i = 47;
			}
		}
	_putchar('\n');
j = 0;
	}
}
