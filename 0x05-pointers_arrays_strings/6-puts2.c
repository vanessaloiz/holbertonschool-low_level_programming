#include "main.h"
/**
 * puts2 - Print every other character.
 * @str: Parameter of contain the string.
 */
void puts2(char *str)
{
	int idx;

	for (idx = 0; str[idx] != 0; idx += 2)
		_putchar(str[idx]);
	_putchar('\n');
}
