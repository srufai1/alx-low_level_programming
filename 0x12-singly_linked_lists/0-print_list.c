#include "list.h"
/**
 * print_list- A function to print all the list of a node
 * @h: A poiter parameter
 * Return: num of nodes
 */

size_t print_list(const list_t *h)
{
size_t num = 0;

while (h)
{
if (h->str == NULL)
{
printf("[0]\t(nil)\n");
}
else
{
printf("[%d]\t%s\n", h->len, h->str);
}
num++;
h = h->next;
}
return (num);
}
