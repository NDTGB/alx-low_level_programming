#include "main.h"

/**
 *print_sign - a program that prints the sign of numbers
 *@n: number with the sign to be printed
 *Return: 1 if the sign is greater than zero,
 *	0 if the sign is zero,
 *	-1 if the sign is less than zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');

		return (0);
	}

	else
	{
		_putchar('-');

		return (-1);

	}
}
