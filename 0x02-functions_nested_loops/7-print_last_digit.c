#include "main.h"
/**
 * print_last_digit - print the last digot of a number
 * @n: used for the argument of the function
 *
 * Return: integer value
 */
int print_last_digit(int n)
{
int last;

last = n % 10;

if (last < 0)
last = last * -1;
_putchar(last + '0');
return (last);
}
