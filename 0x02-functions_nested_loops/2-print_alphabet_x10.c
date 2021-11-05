#include"main.h"
/**
 * print_alphabet_x10 - Print 10 times the alphabet.
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char alpha;
	int times;

	for (times = 0; times < 10; times++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
