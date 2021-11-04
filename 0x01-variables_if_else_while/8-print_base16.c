#include<stdio.h>
/**
 * main - Main block print base 16
 * Return: 0
 */
int main(void)
{
	int n = '0';
	char n2 = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (n2 <= 'f')
	{
		putchar(n2);
		n2++;
	}
	putchar('\n');
	return (0);
}
