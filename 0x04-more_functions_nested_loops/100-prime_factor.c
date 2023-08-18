#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - entry point
 *
 * Description: program that finds and prints the largest prime factor 
 * of the number 612852475143
 *
 * Return : 0 Always
*/

int main(void)
{
	unsigned long long n = 10;
	bool getout = true;

	while(i < n && getout == true)
	{
		if (n % i == 0)
		{
			getout = false;
			printf("%llu is not a prime number", n);
		}
	}
}
