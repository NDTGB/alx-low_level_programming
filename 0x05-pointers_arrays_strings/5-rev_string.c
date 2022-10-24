#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: pointer to the string variable
 *
 * Return: always success
 */

void rev_string(char *s)
{

char ctnr;
int i, length_one, length;

length_one = 0;
length = 0;

while (s[length] != '\0')
{
length++;
}

length_one = length - 1;
for (i = 0; i < length / 2; i++)

{

ctnr = s[i];
s[i] = s[length_one];
s[length_one--] = ctnr;

}
}
