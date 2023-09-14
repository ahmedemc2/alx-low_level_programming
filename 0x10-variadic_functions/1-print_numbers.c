#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 *
 * @separator : the string to be printed between numbers
 * @n : the counter of numbers
 *
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	va_list num;

	if (n)
	{
		va_start(num, n);
		while (i--)
		{
			printf("%d", va_arg(num, int));
			if (i && separator)
				printf("%s", separator);
		}
	}
	printf("\n");
}
