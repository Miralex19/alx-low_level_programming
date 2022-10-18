#include <stdio.h>
/**
* print_alphabet - entry point
*/

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++
	}
	putchar("\n")
}
/**
 * main - entry point
 * Return:(0) passed
*/
int main(void)
{
	print_alphabet();
	return (0);
}
