#include <stdio.h>
/**
*main - To print out Alphabets in reverse
*Return: Always 0 (Success)
*/
int main(void)
{
char lett[26] = "zyxwvutsrqponmlkjihgfedcba";
int i;
for (i = 0; i < 26; i++)
{
putchar(lett[i]);
}
putchar('\n');
return (0);
}
