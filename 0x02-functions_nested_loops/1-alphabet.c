#include "main.h"

/**
 *print_alphabet - print letters of the alphabets in lower case
 */

void print_alphabet(void)

{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

		_putchar(alphabet);

	_putchar('\n');
}

