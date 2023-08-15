#include "main.h"

/**
 * _islower - entry point
 *
 * Description: function that checks for lowercase character
 *
 * @c : checks input of function
 *
 * Return: 1 if the character is lowercase or 0 otherwise
*/

int _islower(int c);
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);

}
