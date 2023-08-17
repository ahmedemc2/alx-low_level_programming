#include "main.h"

/**
 * _isdigit - entry point
 *
 * Description: function that checks for a digit (0 through 9)
 *
 * @c : checks the input of the function
 *
 * return: 1 if 'c' is a digit
 * 0 otherwise
*/

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
