#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements to be printed.
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index == n - 1)
		{
			continue;
		}
		printf(", ");
	}
	printf("\n");
}
