#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
*/

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);

	(void)argv;
	return (0);
}
