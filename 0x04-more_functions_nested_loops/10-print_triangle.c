#include"main.h"
/**
 * print_triangle - Prints a triangle
 * @size: The size of the triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int count, spaces;

	if (size <= 0)
		_putchar('\n');
	for (count = 1; count <= size; count++)
	{
		for (spaces = 1; spaces <= size; spaces++)
		{
			if (spaces <= (size - count))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
