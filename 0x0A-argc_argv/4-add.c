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
	int i, sum = 0;
if (argc > 2)
{
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] > 47 && *argv[i] < 58)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
}
else
{
	printf("%d\n", argc - 1);
}
return (0);
}
