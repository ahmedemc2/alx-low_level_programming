#include <stdarg.h>
#include "variadic_functions.h"

/**
 * _char - char format specifier
 *
 * @separator: the string separator
 * @ch: argument pointer
*/

void _char(char *separator, va_list ch)
{
	printf("%s%c", separator, va_arg(ch, int));
}

/**
 * _int - int format specifier
 *
 * @separator: the string separator
 * @ch: argument pointer
*/

void _int(char *separator, va_list ch)
{
	printf("%s%d", separator, va_arg(ch, int));
}

/**
 * _float - float format specifier
 *
 * @separator: the string separator
 * @ch: argument pointer
*/

void _float(char *separator, va_list ch)
{
	printf("%s%f", separator, va_arg(ch, double));
}

/**
 * _string - string format specifier
 *
 * @separator: the string separator
 * @ch: argument pointer
*/

void _string(char *separator, va_list ch)
{
	char *s;

	printf("%s%s", separator, (s = va_arg(ch, char *)) ? s : "(nil)");
}

/**
 * print_all - function that prints anything
 *
 * @format : format specifier of the data
 * @... : the arguments
 *
 * Return: nothing
*/

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ch;
	token_t tokens[] = {
		{"c", _char},
		{"i", _int},
		{"f", _float},
		{"s", _string},
		{NULL, NULL}
	};
	va_start(ch, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].specifier(separator, ch);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ch);
}
