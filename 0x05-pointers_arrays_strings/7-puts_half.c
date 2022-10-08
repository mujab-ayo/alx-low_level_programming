#include "main.h"
/**
 * puts_half - print half string
 *
 * @str: referenc the string
 * Description: print half if the string
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int len = 0;
	int half;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	if (len % 2 != 0)
	{
		half = (len - 1) / 2;
	}
	else
		half = len / 2;

	for (i = half; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
