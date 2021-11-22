#include "main.h"
/**
 * reverse_array - Reverses of an array of integers
 * @a: Pointer of integer to reverse
 * @n: Numbers of elements of the array
 */
void reverse_array(int *a, int n)
{
	int idx, temp;

	for (idx = 0; idx < n; idx++)
	{
		n--;
		temp = a[idx];
		a[idx] = a[n];
		a[n] = temp;
	}
}
