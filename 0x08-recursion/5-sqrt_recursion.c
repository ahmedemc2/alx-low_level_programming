#include "main.h"

int square(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: number input
 *
 * Return: square root of n
*/

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - function that find the square of a number
 *
 * @n : the number
 * @i : the first value
 *
 * Return: the square root of n
*/

int square(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (square(n, i + 1));
	else
		return (-1);
}
