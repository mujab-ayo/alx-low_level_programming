#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/**
 *main - last digit
 *
 *Description: check the last digit of the given number
 *Return: 0
 * /
/* betty style doc for function main goes there */

int main(void)
{
	int n, m;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	m = n % 10;

	if (m > 5)
	{
		printf("Last digit of %d is %d and it is greater than 5\n", n, m);
	}
	else if (m < 6 && m != 0)
	{
		printf("Last digit of %d is %d and less than 6 but not equal to 0\n", n, m);
	}													else
	{
		printf("Last digit of %d is %d and it is equal to 0\n", n, m);
	}
	return (0);
}
