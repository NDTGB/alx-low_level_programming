#include "main.h"

/**
 *jack_bauer - prints every minute of time in a day
 */

void jack_bauer(void)
{
	int HH;
	int mm;

	{
		for (HH = 0; HH <= 23; HH++)

		{
			for (mm = 0; mm <= 59; mm++)
				_putchar((HH / 10) + '0');
				_putchar((HH % 10) + '0');
				_putchar(':');
				_putchar((mm / 10) + '0');
				_putchar((mm % 10) + '0');

				_putchar ('\n');

		}
	}
}
