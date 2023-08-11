#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	char hex = 48;

	while (hex < 103)
	{
	putchar(hex);
	if (hex == 57)
	hex += 39;
	hex++;
	}
	putchar('\n');
	return (0);
}
