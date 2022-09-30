#include "main.h"
/**
 * _strlen_recursion - return the length os string s
 *
 * @s: string to measure
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
		return (l);
	}
	return (0);
}
