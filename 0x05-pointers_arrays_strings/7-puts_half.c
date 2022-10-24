#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 *
 * @str: variable to print the string from
 *
 * Return: Always 0
 */

void puts_half(char *str)
{
	int length, num, i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (i = length / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (length % 2)
	{
		for (num = (length - 1) / 2; num < length - 1; num++)
		{
			_putchar(str[num + 1]);
		}
	}
	_putchar('\n');
}
