#include "main.h"

/**
 * puts_half - function should print the second half of the string
 *
 * @str: input of the function
 *
 * return: nothing
*/

void puts_half(char *str)
{
	int l = 0, i;

	while (*str != '\0')
	{
		l++;
		str++;
	}
	if (l % 2 == 0)
	{
		for (i = l / 2 ; i < l ; i++)
			_putchar(*(str + i));
	}
	else
	{
		for (i = (l - 1) / 2 ; i < l ; i++)
			_putchar(*(str + i));
	}
	_putchar('\n');
}
