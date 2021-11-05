#include"main.h"
/**
 * jack_bauer - Print every minute of the day.
 * Return: 0
 */
void jack_bauer(void)
{
	int m1, m2, h1, h2;

	for (h1 = '0'; h1 <= '2'; h1++)
	{
		for (h2 = '0'; h2 <= '9'; h2++)
		{
			if (h1 == '2' && h2 == '4')
			{
				break;
			}
			for (m2 = '0'; m2 <= '5'; m2++)
			{
				for (m1 = '0'; m1 <= '9'; m1++)
				{
					_putchar(h1);
					_putchar(h2);
					_putchar(58);
					_putchar(m2);
					_putchar(m1);
					_putchar('\n');
				}
			}
		}
	}
}
