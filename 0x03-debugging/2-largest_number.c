#include "main.h"

/**
 * This program prints the largest of three integers.
 * a: first integer
 * b: second integer
 * c: third integer
 * Return: the largest number of  3 numbers
 */

int largest_number(int a, int b, int c)
{
	int largest = a;

	if (largest < b)
	{
		largest = b;
		if (largest < c)
			largest = c;
		
	}

	return (largest);
}
