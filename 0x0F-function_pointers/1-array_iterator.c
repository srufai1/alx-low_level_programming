#include "function_pointers.h"
/**
* array_iterator - prints each array elem on a newline
* @array: array
* @size: argument to take
* @action: pointer parameter
* Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (action == NULL || array == NULL)
return;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
