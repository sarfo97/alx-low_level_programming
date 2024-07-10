#include <stdio.h>
#include "main.h"

/**
  * print_diagsums - Print the sum of two diagonals of square matrix
  *
  * @a: the matrix
  * @size: the size
  *
  * Return: Nothing.
  */
void print_diagsums(int *a, int size)
{
	int i, a = 0,b = 0;

	for (i = 0; i < size; i++)
	{
		a += a[(size + 1) * i];
		b += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", a, b);
}
