#include <stdio.h>
/**
 * main - print number
 *
 * Description: print number from 0 - 9
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	putchar('\n');
	return (0);
}
