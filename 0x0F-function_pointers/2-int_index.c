#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array : the array into we will search
 * @size : the size of the array
 * @cmp : a pointer to the function to be used to compare values
 *
 * Return: the index of the first element for which the cmp function
 * does not return 0,
 * return -1 if no element matches or if the size is negative
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if ((*cmp)(*(array + i)))
				return (i);
			i++;
		}
	}
	return (-1);
}
