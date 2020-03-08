#include <stdio.h>
#include <stdlib.h>
/**
 *main - cheks
 *@argc:number
 *@argv:array
 *Return: 0 or 1
 */
int main(int argc, char *argv[])
{
if (argc == 3)
{
int x;
x = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", x);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
