#include <stdio.h>
/**
*main - To print out 10 single numbers
*
*Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar("%d", i);
}
putchar('\n');
return (0);
}
