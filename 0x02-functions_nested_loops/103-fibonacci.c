#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry number
 *
 * Description: program that finds and prints the sum of the even-valued terms
 *
 * Return: 0 Always
*/

int main(void)
{
	int sum = 0, fib, f1 = 0, f2 = 1;

	do {
		fib = f1 + f2;
		if (fib % 2 == 0)
			sum += fib;
		f1 = f2;
		f2 = fib;
	} while (fib < 4000000);

	printf("%d\n", sum);
	return (0);
}
