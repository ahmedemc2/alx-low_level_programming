#include <stdio.h>

/**
 * main - entry point
 *
 * Dscriprtion: print numbers starting from 0 to 9 using only putchar function
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
	putchar(i + '0');
	i++;
	}
	putchar('\n');
return (0);

}
