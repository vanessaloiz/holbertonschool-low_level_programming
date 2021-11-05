#include"main.h"
/**
 * _isalpha - Checks for alphabetic character.
 * @c : Variable
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 97 && c < 123))
		return (1);
	else
		return (0);
}
