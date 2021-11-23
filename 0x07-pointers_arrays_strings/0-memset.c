#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer of memory
 * @b: Constant byte
 * @n: Bytes of memory.
 * Return: Pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
		s[idx] = b;
	return (s);
}
