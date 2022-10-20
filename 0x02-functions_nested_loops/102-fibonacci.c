#include <stdio.h>

/**
 *main - print 50 fibonacci numbers
 *Return: always 0
 */

int main(void)
{
	int count;
	unsigned long x = 0, y = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = x + y;

		printf("%lu", sum);

		x = y;
		y = sum;

		if (count == 49)

			printf("\n");

		else

			printf(", ");
	}

	return (0);
}
