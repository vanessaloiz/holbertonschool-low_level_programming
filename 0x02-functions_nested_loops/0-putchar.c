#include"main.h"
/**
 * main - Main block
 * Return: 0
 */
int main(void)
{
	char *s = "_putchar";
	int idx = 0;

	while (s[idx] != '\0')
	{
		_putchar(s[idx]);
		idx++;
	}
	_putchar('\n');
	return (0);
}
