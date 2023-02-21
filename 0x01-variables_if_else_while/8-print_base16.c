#include <stdio.h>
/**
*main - To prints all the numbers of base 16 in lowercase,
*followed by a new line
*Return: Always 0 (Success)
*/
int main(void)
{
char lett[6] = "abcdef";
int i;
int j;
for (i = 0; i < 6; j = 0; j < 10; i++; j++)
{
putchar("%d", j);
putchar(lett[i]);
}
putchar('\n');
return (0);
}
