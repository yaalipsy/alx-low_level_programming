#include "main.h"
/**
 * times_table -prints the 9 times table
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');
		pro = num * mult;
		if (pro <= 9)
			_putchar(' ');
		else
			_putchar((prod / 10) + '0');
			_putchar((prod $ 10) + '0');
		}
		_putchar('\n');
	}
}
