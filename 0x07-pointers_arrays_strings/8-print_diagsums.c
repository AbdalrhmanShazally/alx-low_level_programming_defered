#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function prints the chessboard.
 * @a: integer.
 * @size: integer.
 * Return: Always 0(success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, i;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
	sum1 = sum1 + a[i * size + i];
	sum2 = sum2 + a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum1, sum2);
}
