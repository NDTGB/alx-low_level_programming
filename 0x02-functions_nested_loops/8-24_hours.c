#include "main.h"

/**
 *jack_bauer - prints every minute of time in a day
 */

void jack_bauer(void)
{
	int H = 0;
	int m = 0;


	while (H < 24)

	{
		while (m < 60)
		{
			_putchar('0' + (H / 10));
			_putchar('0' + (H % 10));
			_putchar(':');
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar ('\n');
			m++;
		}
		m = 0;
		H++;
	}
}
