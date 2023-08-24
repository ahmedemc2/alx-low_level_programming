#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 *
 * @str : the input string
 *
 * Return: the encoded string using rot13
*/

char *rot13(char *str)
{
	int i;
	char alphabet1[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char alphabet2[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";
	char *ptr = str;

	while (*str)
	{
		for (i = 0 ; i < 52 ; i++)
		{
			if (*str == alphabet1[i])
			{
				*str = alphabet2[i];
				break;
			}
		}
		str++;
	}
	return (ptr);
}
