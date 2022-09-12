#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print combination of two numbers
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; i++)
		{
			if (i <= j)
			{
				putchar(i);
				putchar(j);
			}
			if (i != 9 && j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
