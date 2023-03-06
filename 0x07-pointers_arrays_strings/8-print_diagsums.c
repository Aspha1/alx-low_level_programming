#include "main.h"

/**
 * print_diagsums -  function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: input
 * @size: input
 * Return: 0 if success
 */
void print_diagsums(int *a, int size)
{
	int b, c, y;

	b = 0;
	c = 0;

	for (y = 0; y < size; y++)
	{
		b = c + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		c = a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", b, c);
}
