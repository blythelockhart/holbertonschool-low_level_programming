#include <stdio.h>

/**
 * main - Prints the name of the file it was compiled from.
 * Return: ...
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
