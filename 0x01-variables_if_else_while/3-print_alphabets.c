#include <stdio.h>
/**
 * main - Begin point
 *
 * Return: 0 for (Success)
 */
int main(void)
{
char abc;

for (abc = 'a'; abc <= 'z'; abc++)
{
putchar(abc);
}
for (abc = 'A'; abc <= 'Z'; abc++)
{
putchar(abc);
}
putchar('\n');
return (0);
}
