#include "main.h"

int CheckPrime(int n, int i);

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 *
 * @n : the number to check
 *
 * Return: 1 if its prime 0 if its not prime
*/

int is_prime_number(int n)
{
	return (CheckPrime(n, 2));
}

/**
 * CheckPrime - function that check if its prime or not
 *
 * @n : the number to check
 * @i : the numebers to check if its divisible by n
 *
 * Return: 1 if its prime 0 if its not
*/

int CheckPrime(int n, int i)
{
	if (n == i)
		return (1);

	else if (n % i == 0 || n <= 1)
		return (0);

	else
		return (CheckPrime(n, i + 1));
}
