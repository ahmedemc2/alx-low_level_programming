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

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
