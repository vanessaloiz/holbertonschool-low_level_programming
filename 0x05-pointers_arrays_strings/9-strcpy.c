#include "main.h"
/**
 * _strcpy - Copy the string.
 * @dest: Destination of string copy.
 * @src: Source of string copy
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int idx;

	for (idx = 0; src[idx] != '\0'; idx++)
	{
		dest[idx] = src[idx];
	}
	dest[idx] = '\0';
	return (dest);
}
