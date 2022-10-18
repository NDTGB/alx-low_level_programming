#include "main.h"

/**
 *jack_bauer - prints every minute of time in a day
 */

void jack_bauer(void)
{
	int HH = 0;
	int mm = 0;

	{
		while (HH < 24)

		{
			while (mm < 60)
				_putchar('0' + (HH / 10));
				_putchar('0' + (HH % 10));
				_putchar(':');
				_putchar('0' + (mm / 10));
				_putchar('0' + (mm % 10));

				_putchar ('\n');
				mm++;

		}
		mm = 0;
		HH++;
	}
}
