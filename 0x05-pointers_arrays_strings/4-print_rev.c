#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @s: Parameter the pointer of a string.
 */
void print_rev(char *s)
{
	int idx, idx1;
	char str;

	for (idx = 0; s[idx] != '\0' ; idx++)
		;
	for (idx1 = 0; idx1 <= idx; idx1++, idx--)
	{
		str = s[idx1];
		s[idx1] = s[idx];
		s[idx] = str;
	}
}
