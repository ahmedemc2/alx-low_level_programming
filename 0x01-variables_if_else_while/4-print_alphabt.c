#include <stdio.h>

/**
 * main - entry point
 *
 * Description: c program that write all alphabet expect q and e
 *
 * Return:0 (success)
*/
int main(void)
{
	int alphabet = 97;

	do {
	if (alphabet != 101 && alphabet != 113)
	putchar(alphabet);
	alphabet++;
	} while (alphabet <= 122);
	putchar('\n');
	return (0);
}
