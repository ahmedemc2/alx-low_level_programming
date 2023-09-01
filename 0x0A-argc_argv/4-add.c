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
			return (printf("Error\n"), 1);
		}
	}
	printf("%d\n", sum);
}
else if (argc == 2)
{
	return (printf("Error\n"), 1);

}
else if (argc == 1)
{
	return (0);
}
return (0);
}
