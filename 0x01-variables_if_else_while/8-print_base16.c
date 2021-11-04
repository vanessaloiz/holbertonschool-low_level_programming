#include<stdio.h>
/**
 * main - Main block print base 16
 * Return: 0
 */
int main(void)
{
	int n = '30';

	while (n <= '39')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
