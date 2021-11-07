#include"main.h"
/**
 * print_diagonal - Draws a diagonal line
 * @n: Number of times \ should be printed
 * Return: 0
 */
void print_diagonal(int n)
{
	int count, spaces;

	for (count = 0; count < n; count++)
	{
		for (spaces = 0; spaces < count; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
