#include "main.h"

/**
 *_islower - a program that checks for lower case character
 *Return: 1 if the character is lowercase but 0 if not
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')

		return (1);
	
	else

		return (0);

}
