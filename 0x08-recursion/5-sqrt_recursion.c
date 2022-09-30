#include "main.h"

int _sqrt_recursion(int n);
int _sqrt(int n, int root);

/**
 * _sqrt - find the square root of number input
 *
 * @num: The number to find the square root of
 * @root: The root to be tested.
 * Return: If the number has a natural square root - the square root
 *	If the number does not have a natural square root - -1
 */
int _sqrt(int n, int root)
{
	if ((root * root) == n)
		return (root);

	if (root == n / 2)
		return (-1);

	return (_sqrt(n, root + 1));
}

/**
 * _sqrt_recursion - check for natural number
 *
 * @n: number to find square root of
 * Return: if n has a natural square root - return n
 *	if not, return - -1
 */
int _sqrt_recursion(int n)
{
	int root;

	root = 0;
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt(n, root));
}
