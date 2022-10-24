#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: pointer to the first value
 * @b: pointer to the second value
 *
 */

void swap_int(int *a, int *b)
{
int value;

value = *a;
*a = *b;
*b = value;

}
