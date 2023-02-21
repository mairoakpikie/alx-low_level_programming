#include <stdio.h>
/**
*main - To print out Alphabets in small and capitals
*Return: Always 0 (Success)
*/
int main(void)
{
char lett[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 52; i++)
{
putchar(lett[i]);
}
putchar('\n');
return (0);
}
