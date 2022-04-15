#include <stdio.h>
/**
 * main - Starting point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char abc;

for (abc = 'z'; abc >= 'a'; abc--)
{
putchar(abc);
}
putchar('\n');
return (0);
}
