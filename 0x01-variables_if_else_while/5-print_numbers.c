#include <stdio.h>
/**
 * main - print number
 *
 * Description: print number 1 - 10
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);
	putchar('\n');
	return (0);
}
