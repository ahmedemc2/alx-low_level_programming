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
	int len = 0, i;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = len-1; i >= 0 ; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
