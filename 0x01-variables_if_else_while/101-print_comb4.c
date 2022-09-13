#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print combinations of 3 numbers
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (i < j)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i != '8' || (i == '8' && j != '8') && k != '9')
					{
						putchar(',');
						putchar(' ')
					}
				}
			}
		}
	}
	return (0);
}
