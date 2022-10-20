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
			_putchar('0');

			for (Mul = 1; Mul <= n; Mul++)
			{
				_putchar(',');
				_putchar(' ');

				Pro = Num * Mul;


				if (Pro <= 9 && Pro <= 99)
				{	_putchar(' ');
					_putchar(' ');
					_putchar(Pro + '0');
				}


				else if (Pro >= 100)
				{
					_putchar((Pro / 100) + '0');
					_putchar(((Pro / 100) % 10) + '0');
					_putchar((Pro % 100) + '0');
				}

				else if (Pro > 9 && Pro < 100)
				{
					_putchar((Pro / 100) + '0');
					_putchar((Pro % 100) + '0');
				}

			}
			_putchar('\n');
		}
	}
}
