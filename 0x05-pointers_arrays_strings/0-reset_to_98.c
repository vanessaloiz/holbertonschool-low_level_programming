#include "main.h"
/**
 * reset_to_98 - Updates the value it points
 * @n: Parameter of pointer
 * Return: void
 */
void reset_to_98(int *n)
{
	int *up = &*n;

	*up = 98;
}
