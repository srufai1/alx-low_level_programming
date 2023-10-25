#include "main.h"
/**
 *_puts_recursion - function behaves like the puts function in c
 *@s: Input parameter
 */

void _puts_recursion(char *s)
{
if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
else
	{
	_putchar('\n');
	}
}
