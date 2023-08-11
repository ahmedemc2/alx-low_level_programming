#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print lowercase than uppercase alphabet using only putchar
 *
 * Return: 0 (success)
*/
int main(void)
{
	int alphabet = 97;
	int ALPHABET = 65;

	do {
		putchar(alphabet);
		alphabet++;
	} while (alphabet <= 122);
	do {
		putchar(ALPHABET);
		ALPHABET++;
	} while (ALPHABET <= 90);
	putchar('\n');
	return (0);
}

