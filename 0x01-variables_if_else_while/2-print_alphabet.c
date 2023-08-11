#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print lowercase alphabet with putchar function only
 *
 * Return: 0 (success)
*/
int main(void)
{
	char alphabet = 'a';

	do {
		putchar(alphabet);
		alphabet++;
	} while (alphabet <= 'z');
	putchar('\n');
	return (0);
}
