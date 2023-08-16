#include <stdio.h>
#include <stdlib.h>

/**
 * numLenght - function used in the main code
 *
 * Description: measure the lenght of an inter number
 *
 * @num : checks the input of numLenght function
 *
 * Return: lenght
*/
int numLenght(int num)
{
	int lenght = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		lenght += 1;
	}
	return (lenght);
}
/**
 * main -entry point
 *
 * Description: program that finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: 0 Always
*/

int main(void)
{
	int count, initial0s;
	unsigned long f1 = 1, f2 = 2, sum, max = 100000000,
		      f1o = 0, f2o = 0, sumo = 0;

	for (count = 1 ; count <= 98; count++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		initial0s = numLenght(max) - 1 - numLenght(f1);

		while (f1o > 0 && initial0s > 0)
		{
			printf("%d", 0);
			initial0s--;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % max;
		sumo = f1o + f2o + (f1 + f2) / max;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
