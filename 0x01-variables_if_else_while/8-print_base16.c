#include <stdio.h>
/**
 * main - print hexadecimal
 *
 * Description: print all numbers of hexadecimal
 * Return: 0
 */
int main(void)
{
	char ch, num;

	for (num = '1'; num <= '9'; num++)
		putchar(num);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	return (0);
}
