#include "function_pointers.h"

/**
 * print_name - a function that prints a name, taking the name and
 * a function to a pointer
 *
 * @name : the name to print
 * @f : function to pointer
 *
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		(*f)(name);
	}
}
