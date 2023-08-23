#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers
 *
 * @a: array name
 * @n: the dimension of the array
 *
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0 ; i < n / 2 ; i++)
	{
		c = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = c;
	}
}
