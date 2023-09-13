#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array
 *
 * @array : the array to be printed
 * @size : the size of the array
 * @action : a pointer to the function we need to use it
 *
 * Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array && size && action)
	{
		while (size--)
		{
			(*action)(*(array + i));
			i++;
		}
	}
}
