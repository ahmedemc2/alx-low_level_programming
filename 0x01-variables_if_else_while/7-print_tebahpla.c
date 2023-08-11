#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print lowercase alphabet in reverse
 *
 * Return: 0 (success)
*/

int main(void)
{
	char alphabet = 122;

	while (alphabet >= 97)
	{
	putchar(alphabet);
	alphabet--;
	}
	putchar('\n');
	return (0);
}
