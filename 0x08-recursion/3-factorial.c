#include "main.h"

/**
 * factorial - entry point
 * @n: parameter
 *
 * Return: factorial of n
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}

