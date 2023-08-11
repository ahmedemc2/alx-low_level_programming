#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: program that prints all possible combinations of single-digit
 *
 * Return: 0 (success)
*/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(44);
			putchar('\t');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
