#include "main.h"

/**
 * print_triangle - function that print a triangle
 *
 * @size : input of the size of the triangle
 *
 * Return: 0 always
*/

void print_triangle(int size)
{
	int i, j, k;

	for (i = 0 ; i < size ; i++)
	{
		for (j = size - i - 1 ; j > 0 ; j--)
			_putchar(' ');
		for (k = 0 ; k < i + 1 ; k++)
			_putchar('#');
		_putchar('\n');
	}
}
