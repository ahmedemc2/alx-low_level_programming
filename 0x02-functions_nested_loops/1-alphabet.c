#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description: we will write  a function that prints the alphabet,
 * in lowercase using only _putchar twine in the code
 *
 * Return: 0 Always
*/

void print_alphabet(void)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}

