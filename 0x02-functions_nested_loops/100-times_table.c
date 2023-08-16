#include "main.h"

/**
 * print_times_table - entry point
 *
 * Description: function that prints the n times table, starting with 0
 *
 * @n : checks input of the function
 *
 * Return: nothing
*/

void print_times_table(int n)
{
	int i, j, k, mult;

	if (n < 15 && n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar(48);
			_putchar(',');
			for (j = 0 ; j < n ; j++)
			{
				mult = i * j;
				if (n <= 9)
				{
					k = 0;
					while (k < 3)
					{
						_putchar(' ');
					}
				_putchar(mult + '0');
				_putchar(',');
				}
				else if ((mult / 10) < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((mult / 10) + 48);
					_putchar((mult % 10) + 48);
					_putchar(',');
				}
				else
				{
					_putchar(' ');
					_putchar((mult / 10) + 48);
					_putchar((mult % 10) + 48);
					_putchar(',');
				}

			}
		}
	}
}
