#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/**
 *main - print is positive, is negative, is zero
 *
 * Description: main function is being used
 *
 *Return: 0
 * \

/* betty style doc for function main goes there */

int main(void)

{

		int n;

		srand(time(0));

		n = rand() - RAND_MAX / 2;

		if (n > 0)
			printf("%d is positive\n", n);
		else if (n == 0)
			printf("%d is zero\n", n);
		else if (n < 0)
			printf("%d is negative", n);

		/* your code goes there */

		return (0);

}
