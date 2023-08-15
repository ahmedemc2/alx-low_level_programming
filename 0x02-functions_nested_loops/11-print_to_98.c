#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - entry point
 *
 * description : function that prints all natural number from n to 98
 *
 * @n : checks input of function
 *
 * Return: nothing
*/

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n ; i < 98 ; i++)
		{
			printf("%d", i);
		if (i != 98)
		{
			printf(", ");
		}
		}
	}
	else if (n > 98)
	{
		for (i = n ; i > 98 ; i--)
		{
			printf("%d", i);
		if (i != 98)
		{
			printf(", ");
		}
		}
	}
	else
		printf("98");
}
