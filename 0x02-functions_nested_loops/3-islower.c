#include "main.h"
/**
 * _islower - lowercase
 *
 * Description: check if alphabet is a lower case
 * @c: the integer value it receives
 * Return: 0
 */
int _islower(int c)
{
	int i;


	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)

		{

			return (1);

		}

	}
	return (0);
}
