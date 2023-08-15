#include "main.h"
/**
 * main - entry point
 *
 * Description: program that prints _putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char word[] = "_putchar";
	int ch;

	for (ch = 0 ; ch < 8 ; ch++)
		_putchar(word[ch]);
	_putchar('\n');

	return (0);
}
