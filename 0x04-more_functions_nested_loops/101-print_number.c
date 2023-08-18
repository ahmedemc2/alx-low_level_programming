#include "main.h"
#include <stdio.h>
/**
 * lenght - function give the number of digit in the function
 *
 * @l : the input of the function
 *
 * Return: how many digit in a number
*/

int lenght(int l)
{
	int count = 0;

	if (l < 0)
	{
		while (l < -9)
		{
			l = l / 10;
			count++;
		}
	}
	else
	{
		while (l > 9)
		{
			l = l / 10;
			count++;
		}
	}
	return (count);
}

/**
 * print_number - function that print an intger
 *
 * @n : the input of the function
 *
 * Return : nothing
*/

void print_number(int n)
{
	int i, a, b = 1;
	unsigned int x = n;

	a = lenght(x);
	for (i = 1 ; i < a ; i++)
		b *= 10;
	if (n < 0)
	{
		_putchar('-');
	}
	for (i = a ; i > 0 ; i--)
	{
		_putchar((x / (b * 10)) % 10 + '0');
			b /= 10;
	}
	_putchar(x % 10 + '0');
}
