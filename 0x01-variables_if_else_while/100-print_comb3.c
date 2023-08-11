#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: program that prints all possible different combinations
 * of two digits
 *
 * Return: 0 (success)
*/

int main(void)
{
	int dig0 = 0;
	int dig1 = 1;

	while (dig0 < 10)
	{
		while (dig1 < 10)
		{
			if (dig0 != dig1)
			{
			putchar(dig0 + '0');
			putchar(dig1 + '0');
			if (dig0 != 8)
			{putchar(44);
			putchar(32);
			}
			}
			dig1++;
		}
		dig1 = dig0 + 1;
		dig0++;
	}
	putchar('\n');
	return (0);

}
