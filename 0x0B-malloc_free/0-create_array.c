#include <main.h>

/**
 * create_array- function to create an array of characters,
 * initialized with a specific char.
 * @size: input size of array parameter
 * @c: character variable;
 * Return: NULL if size is 0 or a pointer to array;
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0 || size == NULL)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));

	for (; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
