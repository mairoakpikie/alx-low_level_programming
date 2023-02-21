#include <stdio.h>
/**
*main - To print out Alphabets in small letters without q and e
*Return: Always 0 (Success)
*/
int main(void)
{
char lett[24] = "abcdfghijklmnoprstuvwxyz";
int i;
for (i = 0; i < 24; i++)
{
putchar(lett[i]);
}
putchar('\n');
return (0);
}
