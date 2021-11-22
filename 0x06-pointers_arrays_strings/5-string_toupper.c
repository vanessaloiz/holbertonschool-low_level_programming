#include "main.h"
/**
 * string_toupper - Changes all lowercase letter to uppercase.
 * @str: pointer to change.
 * Return: string
 */
char *string_toupper(char *str)
{
	int idx;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		if (str[idx] >= 'a' && str[idx] <= 'z')
			str[idx] -= 32;
	}
	return (str);
}
