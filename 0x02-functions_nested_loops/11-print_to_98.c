#include"main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural number.
 * @n: Variable number
 * Return: 0
 */
void print_to_98(int n)
{
	int nn;

	if (n <= 98)
	{
		for (nn = n; nn <= 98; nn++)
		{
			if (nn == 98)
			{
				printf("%d\n", nn);
			}
			else
				printf("%d, ", nn);
		}
		_putchar('\n');
	}
	else
	{
		for (nn = n; nn >= 98; nn--)
		{
			if (nn == 98)
			{
				printf("%d\n", nn);
			}
			else
				printf("%d, ", nn);
		}
		_putchar('\n');
	}
}
