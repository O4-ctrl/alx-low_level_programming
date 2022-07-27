#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 * initializes it with a specific char.
 * @size: The size of the array to be initialised.
 * @c: The specific char to initialise the array with.
 *
 * Return: If size == 0 or the fubction fails - Null.
 * Otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int index;

if (size == 0)
return (NULL);

array = malloc(sizeof(char) * size);

if (array == NULL)
return (NULL);

for (index = 0; index < size; index++)
array[index] = c;

return (array);
}
