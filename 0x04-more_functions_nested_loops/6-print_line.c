#include"main.h"
/**
 * print_line - Draws a straight line in the terminal
 *@n: Variable
 * Return:
 */
void print_line(int n)
{
	int count;

	if (n <= 0)
		_putchar('\n');
	for (count = 0; count < n; count++)
		_putchar('_');
	_putchar('\n');
}
