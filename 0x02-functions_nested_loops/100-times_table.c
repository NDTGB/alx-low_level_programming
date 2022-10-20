#include "main.h"


/**
 *print_times_table - Calculate integer from 0
 *@n: an integer
 */

void print_times_table(int n)
{
	int Num, Mul, Pro;

	if (n >= 0 && n <= 15)
	{
		for (Num = 0; Num <= n; Num++)
		{
			for (Mul = 0; Mul <= n; Mul++)
			{
				Pro = (Num * Mul);
				if (Mul == 0)
					_putchar('0' + Pro);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (Pro <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + Pro);
				}
				else if (Pro > 9 && Pro < 100)
				{
					_putchar(' ');
					_putchar('0' + (Pro / 10));
					_putchar('0' + (Pro % 10));
				}

				else if (Pro >= 100)
				{
					_putchar('0' + (Pro / 100));
					_putchar('0' + ((Pro / 10) % 10));
					_putchar('0' + (Pro % 10));
				}
				}
			}
			_putchar('\n');

		}
	}
}
