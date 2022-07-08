#include <stdio.h>

/**
 * main - prints "Fizz" for factor of 3,
 * prints "Buzz" for factor of 5,
 * prints "FizzBuzz" for factor of both 3 and 5
 * for numbers 1-100
 * Return: 0;
 */
int main(void)
{
	int x;

	for (x = 1; x <= 99; x++)
	{
		if (x % 15 == 0)
			printf("FizzBuzz ");
		else if (x % 3 == 0)
			printf("Fizz");
		else if (x % 5 == 0)
			printf("Buzz");
		else
			printf("%i ", x);
	}

	printf("Buzz\n");
	return (0);
}
