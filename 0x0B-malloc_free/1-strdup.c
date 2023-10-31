#include "main.h"
/**
* _strdup - duplicate to current memory location
* @str: char
* Return: NULL
*/
char *_strdup(char *str)
{
  char *ptr_string;
  int count = 0, i = 0;

  if (str == NULL)
    return (NULL);
  while (str[count] != '\0')
    count++;

  ptr_string = malloc(sizeof(char) * (count + 1));

  if (ptr_string == NULL)
    return (NULL);

  for (; str[i]; i++)
    ptr_string[i] = str[i];

  return (ptr_string);

  free(ptr_string);
}
