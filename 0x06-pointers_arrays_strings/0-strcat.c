#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: Destination of string
 * @src: Source of string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int lend, lens;

	for (lend = 0; dest[lend] != '\0'; lend++)
		;
	for (lens = 0; src[lens] != '\0'; lens++)
	{
		dest[lend + lens] = src[lens];
	}
	dest[lend + lens] = '\0';
	return (dest);
}
