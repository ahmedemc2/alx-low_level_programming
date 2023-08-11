#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: combination of three digit
 *
 * Return: 0 (success)
*/

int main(void)
{
int dig0 = 0;
int dig1 = 1;
int dig2 = 2;

while (dig0 < 10)
{
	while (dig1 < 10)
	{
		while (dig2 < 10)
		{
			if ((dig0 != dig1) && (dig1 != dig2))
			{
				putchar(dig0 + '0');
				putchar(dig1 + '0');
				putchar(dig2 + '0');
			if (dig0 != 7)
			{
				putchar(44);
				putchar(32);
			}
			}
			dig2++;
		}
		dig2 = dig1 + 1;
		dig1++;
	}
	dig1 = dig0 + 1;
	dig0++;
}
putchar('\n');
return (0);
}

