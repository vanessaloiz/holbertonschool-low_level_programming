#include "main.h"
/**
 * puts_half - Prints half of a string
 * @str: Parameter that contain a string
 */
void puts_half(char *str)
{
	int idx, idx1;

	for (idx = 0; str[idx] != '\0'; idx++)
		;
	for (idx1 = idx / 2 ; str[idx1] != '\0'; idx1++)
	{
		if (idx % 2 != 0)
			_putchar(str[idx1] - 1);
		else
			_putchar(str[idx1]);
	}
	_putchar('\n');
}
