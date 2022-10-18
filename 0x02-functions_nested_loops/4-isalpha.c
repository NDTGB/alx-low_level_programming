#include "main.h"

/**
 *_isalpha - a program that checks character of alphabet
 *@c: chracter to be examined
 *Return: 1 if chracter lowercase and 0 if upppercase
 */

int _isalpha(int c)

{
	if (!((c <= 'z' && c >= 'a' ) || (c <= 'Z' && c >= 'A')))
		return (1);
	else
		return (0);
}
