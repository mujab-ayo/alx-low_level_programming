#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Dscription:  program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * Return: 0
 */
int main(void)
{
	int i, f1, f2, sum;

	f1 = 0;
	f2 = 1;

	for (i = 1; i <= 50; i++)
	{
		sum = f1 + f2;
		printf("%d", sum);

		f1 = f2;
		f2 = sum;

		if (i < 50)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
