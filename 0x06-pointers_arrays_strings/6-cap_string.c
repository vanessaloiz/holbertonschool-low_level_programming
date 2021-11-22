#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @str: String to capitalizes.
 * Return: str.
 */
char *cap_string(char *str)
{
	int idx;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	for (idx = 0; str[idx] != '\0'; idx++)
	{
		if (str[idx] == 32 || str[idx] == 9 || +
			str[idx] == 10 || str[idx] == 44 || +
			str[idx] == 33 || str[idx] == 34 || +
			str[idx] == 40 || str[idx] == 41 || +
			str[idx] == 59 || str[idx] == 63 || +
			str[idx] == 46 || str[idx] == 123 || +
			str[idx] == 125)
		{
			if (str[idx + 1] >= 'a' && str[idx + 1] <= 'z')
			{
				str[idx + 1] -= 32;
			}
		}
	}
	return (str);
}
