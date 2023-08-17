#include "main.h"

/**
 * print_square - entry point
 *
 * Description: function that prints a square, followed by a new line
 *
 * @size : checks the input of the function
 *
 * Return: nothing
*/

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size ; j++)
				_putchar(35);
			if (j != (size - 1))
				_putchar('\n');
		}
	}
	_putchar('\n');
}
