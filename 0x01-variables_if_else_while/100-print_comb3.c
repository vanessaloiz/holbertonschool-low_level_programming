#include<stdio.h>
/**
 * main - Main block number of 2 combinations.
 * Return: 0
 */
int main(void)
{
	int m;
	int n;

	for (m = '0'; m < '9'; m++)
	{
		for (n = m + 1; n <= '9'; n++)
		{
			putchar(m);
			putchar(n);
			if (m != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
