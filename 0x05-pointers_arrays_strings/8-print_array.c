#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 *
 * @a: the name of the array
 * @n: the number of elements of the array
 *
 * Return: nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i <= n - 1 ; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
