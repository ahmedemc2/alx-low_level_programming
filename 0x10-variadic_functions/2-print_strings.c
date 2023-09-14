#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line
 *
 * @separator : the string to be printed
 * @n : the counter of arguments
 * @... : the arguments to be printed
 *
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	va_list words;

	va_start(words, n);
	if (n)
	{
		while (i--)
		{
			printf("%s", va_arg(words, char *));
			if (i && separator)
				printf("%s", separator);
			if (!separator)
				printf("(nil)");
		}
	}
	printf("\n");
}
