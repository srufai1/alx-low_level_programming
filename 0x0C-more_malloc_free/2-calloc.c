#include "main.h"
/**
* *_memset - Entry point
* @s: memory area parameter
* @c: character to copy
* @n: number of times to copy
* Description: Demonstrating the usage of calloc
* Return: pointer
*/
char *_memset(char *s, char c, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = c;
}

return (s);
}

/**
* *_calloc - allocates memory for an array
* @nmemb: number of elements in the array
* @size: size of each element
* Description: Demonstrating the usage of calloc
* Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(size * nmemb);

if (ptr == NULL)
return (NULL);

_memset(ptr, 0, nmemb * size);

return (ptr);
}
