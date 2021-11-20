#include "main.h"
/**
 * _strcmp - Compare two strings
 * @s1: First string to compare
 * @s2: Second string to compare
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int idx;

	for (idx = 0; s1[idx] != '\0' && s2[idx] != '\0'; idx++)
		if (s1[idx] != s2[idx])
			return (s1[idx] - s2[idx]);
	return (0);
}
