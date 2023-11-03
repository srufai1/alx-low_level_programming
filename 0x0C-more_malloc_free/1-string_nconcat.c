#include "main.h"

/**
* *string_nconcat - concatenates n string to another byte of a string
* @strn1: Append string to
* @strn2: concatenate from this string
* @n: number of bytes from s2 to concatenate to s1
*
* Return: pointer to the resulting string
*/
char *string_nconcat(char *strn1, char *strn2, unsigned int n)
{
char *str;
unsigned int i = 0, len1 = 0, j = 0, len2 = 0;

while (strn1 && strn1[len1])
len1++;
while (strn2 && strn2[len2])
len2++;

if (n < len2)
str = malloc(sizeof(char) * (len1 + n + 1));
else
str = malloc(sizeof(char) * (len1 + len2 + 1));

if (!str)
return (NULL);

while (i < len1)
{
str[i] = strn1[i];
i++;
}

while (n < len2 && i < (len1 + n))
str[i++] = strn2[j++];

while (n >= len2 && i < (len1 + len2))
str[i++] = strn2[j++];

str[i] = '\0';

return (str);
}

