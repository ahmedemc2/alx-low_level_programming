#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n : the number of input argument
 *
 * Return: the sum of args, 0 of n == 0
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	if (n)
	{
		va_list args;

		va_start(args, n);
		for (i = 0; i < n; i++)
			sum += va_arg(args, int);
		va_end(args);
		return (sum);
	}
	return (0);
}
