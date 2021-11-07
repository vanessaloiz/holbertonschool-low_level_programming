#include"main.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: Variable
 * Return:
 */
void print_line(int n)
{
	int count;

	for (count = 1; count <= n; count++)
		_putchar('_');
	_putchar('\n');
}
