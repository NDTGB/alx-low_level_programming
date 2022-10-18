#include "main.h"

/**
 *times_table - a program to generate a multiplication table
 */

void times_table(void)
{
	int n, m, p;

	for (n = 0; n <= 9; n++)

	{
		for (m = 0; m <= 9; m++)
		{
			p = (n * m);

			if (m == 0)
			{
				_putchar('0' + p);
			}
			else if (p <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + p);
			}
			else if (p > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (p / 10));
				_putchar('0' + (p % 10));
			}
		}
		_putchar ('\n');
	}
}
