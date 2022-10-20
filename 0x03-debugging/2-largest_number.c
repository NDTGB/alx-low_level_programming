#include "main.h"

/**
 *largest_number - returns the largest of 3 numbers
 *@a: first integer
 *@b: second integer
 *@c: third integer
 *Return: largest number
 */

int largest_number(int a, int b, int c)

    int largest;
    int a, b, c;
    int largest_number = a;
    a = 972;
    b = -98;
    c = 0;

    if (a > b)
    {
        largest = a;
    }
    if (b > a)
    {
        largest = b;
    }
    if (c > a)
    {
        largest = c;
    }
	printf("%d is the largest number\n", largest);
    return (largest);
}
