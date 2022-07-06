#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print from a given int to 98
 * @n: The given int to start counting from
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n--;
}
printf("\n");
}
else if (n < 98)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n++;
}
printf("\n");
}
else
printf("%d\n", n);
}
