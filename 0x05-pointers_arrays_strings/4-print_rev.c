#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @s: Parameter the pointer of a string.
 */
void print_rev(char *s)
{
	int idx;

	for (idx = 1; s[idx] != '\0'; idx++)
		;
	while (idx >= 0)
	{
		_putchar(s[idx]);
		idx--;
	}
	_putchar('\n');
}
