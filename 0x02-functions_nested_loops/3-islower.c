#include "main.h"
/**
 * _islower - Checks for lowercase
 * @c: Variable
 * Return: 0
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
