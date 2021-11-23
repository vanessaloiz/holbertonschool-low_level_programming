#include "main.h"
/**
 * _memcpy - Function that copies memory area
 * @dest: Destination for the memory to be copy.
 * @src: Source memory to be copy.
 * @n: Bytes to be copy in the memory.
 * Return: Pointer dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
		dest[idx] = src[idx];
	return (dest);
}
