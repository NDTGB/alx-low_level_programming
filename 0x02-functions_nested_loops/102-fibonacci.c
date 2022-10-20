#include <stdio.h>

/**
 *main - print 50 fibonacci numbers
 *Return: always 0
 */

int main(void)
{
	int count;
	int counter = 50;
	long x = 1;
	long y = 2;

	for (count = 1; count <= (counter / 2); count++)
	{
		printf("%li, %li,", x, y);
		x += y;
		y += x;
	}
	if (counter % 2 == 1)
		printf("%li", x);

	printf("\n");

	return (0);
}
