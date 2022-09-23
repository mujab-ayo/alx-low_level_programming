#include "main.h"
/**
 * _strcmp - compare two string
 *
 * @s1: string of char type
 * @s2: string of char type
 * Description: compare the value two strings
 *
 * Return: check for the differnce of the first two unmatched character
 * 	if s1 > s2  return positive value of the difference
 * 	if s1 < s2 return the negative value of the difference
 * 	if s1 == s2 return 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int diff = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
		diff = s1[i] - s2[i];

	return (diff);
}
