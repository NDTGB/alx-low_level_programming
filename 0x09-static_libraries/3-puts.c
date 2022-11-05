#include "main.h"
/**
 *_puts - prints a string of characters
 * @str: string to print
 *_putchar -prints chracters
 * Description: prints a string
 * On success: return the number of characters printed
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
