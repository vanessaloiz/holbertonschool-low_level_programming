#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @s: Parameter the pointer of a string.
 */
void print_rev(char *s)
{
	int idx;

	for (idx = 0; s[idx] != '\0'; idx++)
		;
	idx = idx - 1;
	while (idx >= 0)
	{
		_putchar(s[idx]);
		idx--;
	}
	_putchar('\n');
}
