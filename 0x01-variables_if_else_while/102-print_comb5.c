#include<stdio.h>
/**
 * main - Prints all combination of 2 digits
 * Return: 0
 */
int main(void)
{
	int n, n1, n2, n3;
	int p1, p2;

	for (n = '0'; n <= '9'; n++)
	{
		for (n1 = '0'; n1 <= '9'; n1++)
		{
			for (n2 = n; n2 <= '9'; n2++)
			{
				for (n3 = '0'; n3 <= '9'; n3++)
				{
					p1 = n * 10 + n1;
					p2 = n2 * 10 + n3;
					if (p2 > p1)
					{
					putchar(n);
					putchar(n1);
					putchar(' ');
					putchar(n2);
					putchar(n3);
					if (!(n == '9' && n1 == '8' && n2 == '9' && n3 == '9'))
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
