#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: a function thats prints 10 time the alphabet, in lowercase
 *
 * Return: 0 Always
*/

void print_alphabet_x10(void)
{
	int i, ch;

	for (i = 0 ; i < 11 ; i++)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
