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
	int i = 0, out = 1;

	if (size <= 0)
		return (-1);

	if (array && size && cmp)
	{
		while (i < size && out)

		{
			if ((*cmp)(*(array + i)) != 0)
				out = 0;
			i++;
		}
		if (i == size)
			return (-1);
	}
return (i - 1);
}
