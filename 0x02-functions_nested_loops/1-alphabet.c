#include "main.h"

/**
 * main - print alphabets
 *
 * Return: 0
 */
int main(void)
{
	int ch = 'A';

	while(ch <= 'Z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
