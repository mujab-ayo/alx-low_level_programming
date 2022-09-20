#include "main.h"
/**
 * puts2 - print character of a string
 *
 * @str: reference the string
 * Description: print every other character of the string
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i];
		}

	}
	_putchar('\n');
}
