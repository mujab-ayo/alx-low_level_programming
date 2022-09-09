#include <stdlib.h>

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
			printf("is positive")
		else if (n == 0)
			printf("is zero")
		else (n < 0)
			printf("is negative")

		/* your code goes there */

		return (0);

}
