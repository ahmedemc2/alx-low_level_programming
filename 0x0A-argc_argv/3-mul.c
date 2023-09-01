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
	int mul = 1, i, c;

	if (argc > 2)
	{
	for (i = 1; i < argc; i++)
	{
		c = atoi(argv[i]);
		mul *= c;
	}
	printf("%d\n",mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
