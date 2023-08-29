#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 *
 * @s : the adress
 * @to : the string to sets the value of the pointer
 *
 * Return : nothing
*/

void set_string(char **s, char *to)
{
	*s = to;
}
