#include <stdio.h>

/**
* main - Entry point
* 00 .. 99 with putchar and commas!!!!
* Return: Always 0 (Success)
*/

int main(void)
{
int n;
n = 0;
while (n <= 99)
{
putchar(n / 10 + '0');
putchar(n % 10 + '0');
if (n < 99)
{
putchar(',');
putchar(' ');
}
n++;
}
putchar('\n');
return (0);
}
