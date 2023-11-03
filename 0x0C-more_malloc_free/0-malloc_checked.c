#include "main.h"
/**
 * malloc_checked - Function entry point
 * @b: parameter
 * Return: ptr - a pointer to the allocated memory
 */



void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
	exit(98);
	}
	return (ptr);
}
