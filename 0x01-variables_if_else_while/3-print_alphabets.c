#include <stdio.h>

/**
*main - "prints a-z lowercase and uppercase with new line"
*
*Return:O(Passed)
*/

int main(void)
{
char al = 'a';
char cl = 'A';

while (al <= 'z')
{
putchar(al);
al++;
}
while (cl <= 'Z')
{
putchar(cl);
cl++;
}
putchar('\n')
return (0);
}
