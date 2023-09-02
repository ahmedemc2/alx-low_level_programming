#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc : arguments counter
 * @argv : arguments vector
 *
 * Return: 0
*/

int main(int argc, char **argv)
{

	if (argc == 1 || argc > 2)
		return (printf("Error"), 1);
(void)argv;
return (0);
}
