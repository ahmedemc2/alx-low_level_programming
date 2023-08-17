#include "main.h"

/**
 * print_diagonal - entry point
 *
 * Description: function that draws a diagonal line on the terminal
 *
 * @n : checks the input of the function
 *
 * Return: nothing
*/

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j < i ; j++)
				_putchar(32);
			_putchar(92);

			if (j != (n - 1))
				_putchar('\n');
		}
	}
_putchar('\n');
}
