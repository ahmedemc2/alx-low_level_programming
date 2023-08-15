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
	for (int min = 0 ; min <= 59 ; min++)
	{
		for (int hr = 0 ; hr <= 23 ; hr++)
		{
			_putchar(hr + '0');
			_putchar(':');
			_putchar(min + '0');
		}
	}
}
