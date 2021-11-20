#include "main.h"
#include<stdio.h>
/**
 * print_array - Print an array.
 * @a: Pointer of array.
 * @n: variable of array
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
		if (count == n - 1)
			printf("%d\n", a[count]);
		else
			printf("%d, ", a[count]);
}
