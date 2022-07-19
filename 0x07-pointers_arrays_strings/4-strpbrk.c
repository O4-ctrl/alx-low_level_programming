#include "main.h"
/**
 * _strpbrk - locate the first occurence of string s in string
 * accept
 *
 * @s: string scanned
 * @accept: test
 *
 * Return: pointer to byte in s
 *
 */
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accepet[i]; i++)
{
if (*s Â== accept[i])
{
return (s);
}
}
s++;
}
return (0);
}
