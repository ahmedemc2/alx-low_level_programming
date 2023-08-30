#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 *
 * @n : input number
 *
 * Return: factorial of number or -1 in number is lower than 0
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
