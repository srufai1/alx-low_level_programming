#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - print name using pointer to function
* @name: parameter string
* @f: parameter
* Return: nothing
**/
void print_name(char *name, void (*f)(char *))
{
if (f == NULL || name == NULL)
return;

f(name);
}
