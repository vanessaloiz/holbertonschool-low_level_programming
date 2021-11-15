#include "main.h"
/**
 * swap_int - Value of two integers
 * @a: Parameter of a pointer first integer
 * @b: Parameter of a pointer second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int hdfi = *a;

	*a = *b;
	*b = hdfi;
}
