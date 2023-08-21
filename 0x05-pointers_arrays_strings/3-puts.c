#include "main.h"

/**
 * _puts - function that prints a string
 *
 * @str : input of the function
 *
 * return: nothing
*/

void _puts(char *str)
{
	char n = *str;

	while (n != '\0')
	{
		_putchar(n);
		str++;
		n = *str;
	}
	_putchar('\n');
}
