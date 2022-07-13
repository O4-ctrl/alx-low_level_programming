#include "main.h"

/**
 * _strcpy - copies a string pointed to by @src, including the
 * terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: A source string to copy.
 *
 * Return: pointer to a char
 */
char *_strcpy(char *dest, char *src)
{
int len = 0;

while (*(src + len) != '\0')
{
*(dest + len) = *(src + len);
len++;
}

*(dest + len) = '\0';

return (dest);
}
