#include "main.h"
/**
 * factorial - return factorial of a number
 *
 * @n: number to find factorial of
 * Return: if n < 0 - 1 to indicate error
 *	if n > 0 - factorial of n
 */
int factorial(int n)
{
	int output = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	output *= factorial(n - 1);

	return (output);
}
