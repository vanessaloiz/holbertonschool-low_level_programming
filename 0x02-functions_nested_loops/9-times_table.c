#include"main.h"
/**
 * times_table - Print 9 times table
 * Return: 0
 */
void times_table(void)
{
	int len, wid, res;

	for (len = 0; len <= 9; len++)
	{
		for (wid = 0; wid <= 9; wid++)
		{
			if (wid == 0)
			{
				_putchar(48);
			}
			res = len * wid;
			_putchar(',');
			_putchar(' ');
			if (res >= 10)
			{
				_putchar(res / 10 + 48);
				_putchar(res % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(res + 48);
			}
		}
		_putchar('\n');
	}
}
