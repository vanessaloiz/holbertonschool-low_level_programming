#include<stdio.h>
/**
 * main - Main block reverse alphabet
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha >= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
