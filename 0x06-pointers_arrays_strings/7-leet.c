#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @str: the input string
 *
 * Return: the string encoded
*/

char *leet(char *str)
{
	char *c = str;
	char alphabet[] = "OLEAToleat";
	char numbers[] = {'0', '1', '3', '4', '7', '0', '1', '3', '4', '7'};
	int i;

	while (*str)
	{
		for (i = 0 ; i <= 10 ; i++)
		{
			if (*str == alphabet[i])
				*str = numbers[i];
		}
		str++;
	}
	return (c);
}
