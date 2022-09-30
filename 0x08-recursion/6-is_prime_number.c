#include "main.h"

int is_prime_number(int n);
int check_prime(int n, int div);
/**
 * check_prime - check if inputted number is divisible by div
 *
 * @n: number inputted
 * @div: divisor
 * Return: if is prime - 1
 *	if not - 0
 */
int check_prime(int n, int div)
{
	if (n % div == 0)
		return (0);

	if (div == n / 2)
	return (1);

	return (check_prime(n, div + 1));
}

/**
 * is_prime_number- check if inputted number is a prime number
 *
 * @n: inputted number
 * Return: if prime - 1
 *	else - 0
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (check_prime(n, div));
}
