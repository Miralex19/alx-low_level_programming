#include "main.h"
/**
 *more_numbers - print 0 - 14 ten times
 *
 *
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i < 11; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j/10) + '0');
			}
			_putchar((j/10) + '0');
		}
		_putchar(10);
	}
}
