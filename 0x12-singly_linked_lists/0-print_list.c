#include "lists.h"
/**
 * print_list- A function to print all the list of a node
 * @h: A poiter parameter
 * Return: num of nodes
 */

size_t print_list(const list_t *h)
{
int num = 0;
if (h == NULL)
	return (0);
for (num = 1; h->next != NULL; num++)
{
if (h->str == NULL)
{
printf("[%u] %s\n", h->len, " (nil)");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
}
printf("[%u] %s\n", h->len, h->str);
return (num);
}
