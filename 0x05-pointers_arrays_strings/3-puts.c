#include "main.h"
/**
 * _puts - string
 *
 * @str: is a pointer to string
 * Description: print the string
 * Return: void
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
