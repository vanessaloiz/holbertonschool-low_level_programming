#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: Parameter of string
 */

void rev_string(char *s)
{
	int idx, idx1;
	char temp;

	for (idx = 0; s[idx] != '\0'; idx++)
		;
	for (idx1 = 0, idx--; idx1 <= idx; idx1++, idx--)
	{
		temp = s[idx];
		s[idx] = s[idx1];
		s[idx1] = temp;
	}
}
