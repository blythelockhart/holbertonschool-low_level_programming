#include "main.h"

/**
 * factorial - gets factorial of n
 * @i: integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int factorial(int i)
{
	if (i < 0)
	{
		return (-1);
	}
	if (i == 0)
	{
		return (1);
	}
	return (i * factorial(i - 1));
}
