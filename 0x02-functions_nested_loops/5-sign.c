#include "main.h"

/**
 * print_sign - Entry point
 *
 * Description: function that prints the sign of a number
 *
 * @n : checks input of function
 *
 * Return: 1 if 'n' is grater than zero;
 * 0 if is zero;
 * -1 if is less than zero;
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar('0');
		return (0);
}
