#include "main.h"
/**
 * _isdigit - check for digit
 *
 * @c: is an integer
 * Description: check if an integer
 * is a digit between 0 and 9
 * Return: 1 if true
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
