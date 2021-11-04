#include<stdio.h>
/**
 * main - Print number or 3 combinations
 * Return: 0
 */
int main(void)
{
	int m, n, n2;

	for (m = '0'; m < '8'; m++)
	{
		for (n = m + 1; n <= '8'; n++)
		{
			for (n2 = n + 1; n2 <= '9'; n2++)
			{
				putchar(m);
				putchar(n);
				putchar(n2);
				if (m != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
