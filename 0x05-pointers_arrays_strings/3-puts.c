#include "main.h"
/**
 * _puts - Prints a string.
 * @str: Parameter the pointer of a string.
 * Return: 0
 */
void _puts(char *str)
{
	int idx;

	for (idx = 0; str[idx] != '\0'; idx++)
		_putchar(str[idx]);
	_putchar('\n');
}
