#include <stdio.h>
/**
 * main - sum of fibonacci
 *
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int f1, f2, sum;
	float total;

	f1 = 0;
	f2 = 1;
	for (i = 1; i > 0; i++)
	{
		sum = f1 + f2;

		if (sum > 4000000)
			break;

		if (sum % 2 == 0)
			total += sum;

		f1 = f2;
		f2 = sum;
	}

	printf("%.1f", total);
	return (0);
}
