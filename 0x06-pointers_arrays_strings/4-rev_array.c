#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: variable to be reverse
 * @n: number of elements in the variable
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
