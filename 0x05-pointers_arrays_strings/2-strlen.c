#include "main.h"

/**
 * _strlen - lenght of a string
 * @s: input char
 *
 * Return: lenght of a string
 */
int _strlen(char *s)
{
int l = 0;

while (*s != '\0')
{
s++;
l++;
}
return (l);
}
