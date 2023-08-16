#include <stdio.h>
#include <stdlib.h>

/**
 * main -entry point
 *
 * Description: program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: 0 Always
*/

int main(void)
{
	int i;
	unsigned long f1 = 0, f2 = 1, fib;

	for (i = 0 ; i <= 50 ; i++)
	{
		fib = f1 + f2;
		printf("%lu", fib);
		if (i != 50)
			printf(", ");
		f1 = f2;
		f2 = fib;
	}
	printf("\n");
	return (0);
}
