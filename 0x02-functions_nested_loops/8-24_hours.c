#include "main.h"

/**
 * jack_bauer - prints every minute of the day in a new line
 * hour: represents time in hours.
 * min: represents time in minutes.
 */
void jack_bauer(void)
{
	int hour;
	int min;
	
	hour = 0;
	
	while (hour < 24)
	{
		for (min = 0; min < 60; min++)
		{
			if (min < 10 || hour < 10)
			{
				min = ('0' + min);	
				hour = ('0' + hour);
			}
			_putchar(hour + ':' + min);
		}
		hour++;
	}
}
