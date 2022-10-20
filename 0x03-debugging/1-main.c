#include <stdio.h>

/**
 *main - causes an infinite loop
 *Return: 0
 */

int main(void)

{
	int i;

	printf("Infinite loop incoming :(\n"); /*expected to loop*/

	i = 0;
	while (i >= 10) /*incoming loop expected*/
	{
		putchar(i); /*causes infinite loop*/
	}

	printf("Infinite loop avoided! \\o/\n"); /*loop exists*/
	return (0);

}
