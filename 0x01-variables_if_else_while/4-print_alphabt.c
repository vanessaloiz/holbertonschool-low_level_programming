#include<stdio.h>

/**
 * main - Main block print the alphabt
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
