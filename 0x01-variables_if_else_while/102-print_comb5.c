#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: program that prints all possible combinations of two two-digit
 * numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
int dig0 = 0;
int dig1;

while (dig0 < 100)
{
	dig1 = dig0;
	while (dig1 < 100)
	{
		if (dig1 != dig0)
		{
			putchar((dig0 / 10) + 48);
			putchar((dig0 % 10) + 48);
			putchar(32);
			putchar((dig1 / 10) + 48);
			putchar((dig1 % 10) + 48);
			if (dig0 != 98 || dig1 != 99)
			{
				putchar(44);
				putchar(32);
			}
		}
		dig1++;
	}
	dig0++;

}
putchar('\n');
return (0);
}
