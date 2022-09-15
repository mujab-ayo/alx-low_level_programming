#include "main.h"
/**
 * _abs - absolute number
 *
 *@n: is integer
 * Description: print absolute number of an integer
 * Return: 0
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	else
		return (n);
}
