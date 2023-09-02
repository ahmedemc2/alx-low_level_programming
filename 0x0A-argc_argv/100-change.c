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
	if (argc == 2)
	{
		int i = 0, c, sum = 0, x;
		int cents[5] = {25, 10, 5, 2, 1};

		x = atoi(argv[1]);
		while (x > 1)
		{
			if (x >= cents[i])
			{
				c = x / cents[i];
				x = x % cents[i];
				sum = sum + c;
			}
			i++;
			if (x == 1)
				sum++;
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
