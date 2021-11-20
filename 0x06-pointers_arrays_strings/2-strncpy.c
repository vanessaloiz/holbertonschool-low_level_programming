#include "main.h"
/**
 * _strncpy - Copy a string
 * @dest: Destination of string
 * @src: Source of string
 * @n: Maximum bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len;

	for (len = 0; src[len] != '\0' && len < n; len++)
	{
		dest[len] = src[len];
	}
	while (len < n)
	{
		dest[len] = '\0';
		len++;
	}
	return (dest);
}
