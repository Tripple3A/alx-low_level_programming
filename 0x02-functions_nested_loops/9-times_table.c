#include "main.h"

/**
  *times_table - print the 9 times table, starting with zero.
  *
  */
void times_table(void)
{
	int n;
	int i;
	int result;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (i = 1; i <= 9; i++)
		{
			_putchar(',');
			_putchar(' ');
			result = n * i;
			if (result <= 9)
			{
				_putchar(',');
			}
			else
			{
				_putchar((result / 10) + '0');
			}
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}


