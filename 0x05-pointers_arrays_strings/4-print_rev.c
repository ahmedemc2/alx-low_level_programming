#include "main.h"

/**
 * print_rev -  function that prints a string, in reverse
 *
 * @s : the inputs of the function
 *
 * return: nothing
*/

void print_rev(char *s)
{
	int len = 1, i;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = len; i >= 0 ; i--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
