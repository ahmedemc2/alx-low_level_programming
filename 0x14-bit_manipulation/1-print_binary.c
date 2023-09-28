#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 *
 * @n: the number to be represented into binary
 *
 * Return: nothing
*/

void print_binary(unsigned long int n)
{
	char c;
	unsigned long int x = 0;

	x = n >> 1;
	if (x > 0)
		print_binary(x);
	x = n & 1;
	c = x + '0';
	_putchar(c);
}
