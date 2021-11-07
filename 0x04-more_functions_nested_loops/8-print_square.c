#include"main.h"
/**
 * print_square - Prints a square
 * @size: size of the square
 * Return: 0
 */
void print_square(int size)
{
	int count, count2;

	for (count = 0; count < size; count++)
	{
		for (count2 = 0; count2 < size; count2++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
