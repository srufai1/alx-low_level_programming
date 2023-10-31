#include "main.h"
/**
* str_concat - get ends of input and add together for size
* @s1: concat1
* @s2: concat2
* Return: s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
char *conct;
int i, c1;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

i = c1 = 0;
while (s1[i] != '\0')
i++;
while (s2[c1] != '\0')
c1++;
conct = malloc(sizeof(char) * (i + c1 + 1));

if (conct == NULL)
return (NULL);
i = c1 = 0;
while (s1[i] != '\0')
{
conct[i] = s1[i];
i++;
}

while (s2[c1] != '\0')
{
conct[i] = s2[c1];
i++, c1++;
}
conct[i] = '\0';
return (conct);
}
