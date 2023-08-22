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
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		;

	i++;

	for (i = i / 2 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
