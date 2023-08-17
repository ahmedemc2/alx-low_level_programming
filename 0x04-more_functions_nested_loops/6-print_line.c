#include "main.h"

/**
 * print_line - entry point
 *
 * Description: function that draws a straight line in the terminal
 *
 * @n : checks the input of the function
 *
 * Return: nothing
*/

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
			_putchar(95);
	}
	_putchar('\n');
}
