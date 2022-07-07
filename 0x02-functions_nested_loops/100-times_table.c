#include "main.h"

/**
 * print_times_table - print the n times table, starting from 0
 * @n: The times table to print
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
int x, y, mult, one, ten, hund;

x = 0;
if (n >= 0 && n <= 15)
{
while (x <= n)
{
y = 0;
