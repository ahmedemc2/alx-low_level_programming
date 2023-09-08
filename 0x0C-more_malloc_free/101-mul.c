#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_str - print a string
 *
 * @str: the string to print
 *
 * Return: nothing
*/

void print_str(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
}

/**
 * digit_check - function that check if a string is contained only of numbers
 *
 * @str: the string to check
 *
 * Return: 0 if there is only digit 1 if there is digits
*/

int digit_check(char *str)
{
	int sign = 1;
	unsigned long int i = 0, num = 0;

	while (*(str + i))
	{
		if (*(str + i) == '-' && i == 0)
		{
			sign *= -1;
			i++;
		}
		if (*(str + i) < 48 || *(str + i) > 57)
		{
			print_str("Error\n");
			exit(98);
		}
		num *= 10;
		num += (*(str + i) - 48);
		i++;
	}
	return (sign * num);
}

/**
 * print_int - function that print the integer into string of number
 *
 * @num: the number to be printed
 *
 * Return : Nothing
*/

void print_int(unsigned long int num)
{
	unsigned long int i, div = 1, rsp;

	for (i = 0; num / div > 9; i++, div *= 10)
		;
	for (; div >= 1; num %= div, div /= 10)
	{
		rsp = num / div;
		_putchar('0' + rsp);
	}
}

/**
 * main - the entry point
 *
 * @argc: arguments counter
 * @argv: arguments vector
 *
 * Return: 0
*/

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		print_str("Error\n");
		exit(98);
	}
	digit_check(argv[1]);
	digit_check(argv[2]);
	print_int(digit_check(argv[1]) * digit_check(argv[2]));
	_putchar('\n');
	return (0);
}
