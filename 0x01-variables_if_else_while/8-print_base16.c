#include <stdio.h>
/**
*main - To prints all the numbers of base 16 in lowercase
*Return: Always 0 (Success)
*/
int main(void)
{
char lett[6] = "abcdef";
int i;
int j;
for
((i = 1 i < 7);
(j = 1 j < 11);
i++; j++))
{
putchar("%d", j);
putchar(lett[i]);
}
putchar('\n');
return (0);
}
