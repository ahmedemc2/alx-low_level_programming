#include <stdio.h>
#include <stdlib.h>

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
	int mul = 1;

	if (argc > 2)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n",mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
