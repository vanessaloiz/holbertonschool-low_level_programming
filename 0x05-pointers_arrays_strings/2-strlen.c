#include "main.h"
/**
 * _strlen - Return the length of a string
 * @s: Parameter the pointer of a string
 * Return: 0
 */
int _strlen(char *s)
{
	int idx;

	for (idx = 0; s[idx] != '\0'; idx++)
	;
	return (idx);
}
