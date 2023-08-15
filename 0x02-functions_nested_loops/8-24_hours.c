#include "main.h"

/**
 * jack_bauer - entry point
 *
 * Description: function that prints every minute of the day of
 * Jack Bauer, Starting from 00:00 to 23:59
 *
 * Return: 0 Always
*/

void jack_bauer(void)
{
	int min, hr;

	for (hr = 0 ; hr <= 23 ; hr++)
	{
		for (min = 0 ; min <= 59 ; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
