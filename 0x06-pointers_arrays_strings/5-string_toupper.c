#include "main.h"

/**
 * string_toupper - changes all lowercase to capital letters
 * @st: string to modify
 * Return: char
 */
char *string_toupper(char *st)
{
int i;

for (i = 0; st[i] != '\0'; i++)
{
if (st[i] >= 'a' && st[i] <= 'z')
st[i] -Â= 32;
}

return (st);
}
