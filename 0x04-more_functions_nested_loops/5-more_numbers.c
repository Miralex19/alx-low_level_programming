#include "main.h"
/**
 *more_numbers - print 0 - 14 ten times
 *
 *
 */

void more_numbers(void)
{
	int i;

	for (i = 1; i < 11; i++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
			_putchar('\n');
		}
		_putchar('\n');
	}
}
