#include <stdio.h>

/**
 * main - Print all multiple of 3 & 9 below 1024
 *
 * Returm: Always 0
 */
int main(void)
{
int n, sum;

while (n < 1024)
{
if ((n % 3) == 0 || (n % 5) == 0)
{
sum += n;
}
n++;
}
printf("%d\n", sum);
return (0);
}