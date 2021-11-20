#include "main.h"
/**
 * puts_half - Prints half of a string
 * @str: Parameter that contain a string
 */
void puts_half(char *str)
{
	int len, hlen;

	for (len = 0; str[len] != '\0'; len++)
		;
	if (len % 2 != 0)
		hlen = (len - 1) / 2 + 1;
	else
		hlen = len / 2;
	for ( ; hlen < len; hlen++)
		_putchar(str[hlen]);
	_putchar('\n');
}
