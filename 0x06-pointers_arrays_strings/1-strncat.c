#include "main.h"
/**
 * _strncat - Concatenates two strings
 * @dest: Destination of string
 * @src: Source of string
 * @n: Number of maximum bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int lend, lens;

	for (lend = 0; dest[lend] != '\0'; lend++)
		;
	for (lens = 0; src[lens] != '\0' && lens != n; lens++)
		dest[lend + lens] = src[lens];
	return (dest);
}
