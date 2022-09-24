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
	int sep1 = '0';
	int sep2 = '1';

	i = '1';
	while (i < 9)
	{
		j = '2';
		while (j <= 9)
		{
			putchar(sep1);
			putchar(sep2);
			sep1 = ',';
			sep2 = ' ';
			putchar(i);
			putchar(j);
			j++;
		}
		i++;
	}
	return (0);
}
