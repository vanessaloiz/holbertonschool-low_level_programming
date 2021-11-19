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
	for (hlen = len / 2 ; str[hlen] != '\0'; hlen++)
	{
		if (len % 2 != 0)
		{
			_putchar(str[hlen]);
		}
		else
			_putchar(str[hlen]);
	}
	_putchar('\n');
}
