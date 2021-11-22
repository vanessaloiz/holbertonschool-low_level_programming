#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @str: String to encoding
 * Return: str
 */
char *leet(char *str)
{
	int idx, idx1;
	int int_array[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};
	char char_array[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		for (idx1 = 0; char_array[idx1] != '\0'; idx1++)
		{
			if (str[idx] == char_array[idx1])
			{
				str[idx] =  int_array[idx1];
			}
		}
	}
	return (str);
}
