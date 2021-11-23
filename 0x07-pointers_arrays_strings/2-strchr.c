#include "main.h"
#include <stddef.h>
/**
 * _strchr - Function that locates a character in a string.
 * @s: Pointer of string
 * @c: Character to locates in the string.
 * Return: Pointer s
 */
char *_strchr(char *s, char c)
{
	int idx;

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		if (s[idx] == c)
		{
			return (s + idx);
		}
		if (c == '\0')
		{
			return (s + idx);
		}
	}
	return (NULL);
}
