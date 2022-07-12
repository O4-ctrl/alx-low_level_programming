#include "main.h"

/**
 * _puts - prints string
 * @str: input string
 *
 * Return: no return
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}
