#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonal
 * of a square matrix of integer.
 * @a: The matrix of integers
 * @s: The size of matrix.
 */
void print_diagsums(int *a, int size)
{
int index, sum1 = 0, sum2 = 0;

for (index = 0; index < size; index++)
{
sum1 += a[index];
a += size;
}

a -= size;

