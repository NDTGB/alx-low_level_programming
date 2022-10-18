#include "main.h"

/**
 *print_alphabet_x10 - prints alphabets 10 times
 */

void print_alphabet_x10(void)

{
	char letter;
	int x;

	for (x = 1; x >= 11; x++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)

			_putchar(letter);
	}

	_putchar('\n');
}
