#include "main.h"

/**
 *_isalpha - a program that checks character of alphabet
 *@c: chracter to be examined
 *Return: 1 if chracter lowercase and 0 if upppercase
 */

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
