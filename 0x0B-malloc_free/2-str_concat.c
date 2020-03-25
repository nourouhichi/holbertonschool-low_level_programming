#include "holberton.h"
/**
 *size - gives the length of a string
 *@str:the strung
 *Return: int
 */
int size(char *str)
{
int i;
for (i = 0; str[i] != '\0';)
{
i++;
}
return (i);
}
/**
 *str_concat - concatinates 2 strings
 *@s1:string
 *@s2:string
 *Return:char
 */
char *str_concat(char *s1, char *s2)
{
int x, y, i, j = 0;
char *space;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
x = size(s1);
y = size(s2);
space = malloc(sizeof(char) * (x + y + 1));
if (space == NULL)
return (NULL);
for (i = 0; i < x ; i++, j++)
space[j] = s1[i];
i = 0;
for (j = x; j < x + y; i++, j++)
space[j] = s2[i];
space[j] = '\0';
return (space);
}
