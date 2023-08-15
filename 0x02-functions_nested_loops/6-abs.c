#include "main.h"

/**
 * _abs - entry point
 *
 * Description: function that computes the absolute value of an integer
 *
 * @a : checks input of the function
 *
 * Return: the absolute value of the input
*/

int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (-a);
}
