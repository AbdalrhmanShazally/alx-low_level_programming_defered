#include "main.h"

/**
 * print_array - that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
	if (i != 0)
	{
	printf(", ");
	}
	printf("%d", a[i]);
	i++;
	}
	printf("\n");
}
