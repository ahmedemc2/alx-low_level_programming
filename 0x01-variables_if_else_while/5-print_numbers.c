#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program that prints all single digit numbers of base 10 from 0
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i = 0;

	do {
	printf("%d", i);
	i++;
	} while (i <= 9);
	printf("\n");
	return (0);
}
