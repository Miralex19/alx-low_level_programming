#include <stdio.h>

/**
 * print_alphabet_x10 - No entry point
 *
 * Description - Prints the alphabets in lower case 10x
 *
 */


void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}
/**
 * main - entry point
 *
 * Return: 0 (passed)
 */
int main(void)
{
print_alphabet_x10();
}

