#include<stdio.h>
/**
 * main - Main block all combinations
 * Return: 0
 */
int main(void)
{
	int n;
	int c = ',';

	for (n = '0'; n <= '9'; n++)
	{
		if (n < '9')
		{
			putchar(n);
			putchar(c);
		}
		else if (n == '9')
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
