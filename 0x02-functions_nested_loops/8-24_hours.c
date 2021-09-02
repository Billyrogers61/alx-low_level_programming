#include "main.h"

/**
 * jack_bauer - prints every minute of the day in a new line.
 * hour: represents time in hours.
 * min: represents time in minutes.
 */
void jack_bauer(void)
{
	int time1;
	int time2;
	int time3;
	int time4;

	for (time1 = 0; time1 <=2; time1++)
	{
		if (time1 == 2 && time2 == 4)
		{
			break;
		}
		for (time2 = 0; time2 <= 9; time2++)
		{
			if (time1 == 2 && time2 == 4)
			{
				break;
			}
			for (time3 = 0; time3 <= 5; time3++)
			{
				if (time1 == 2 && time2 == 4)
				{
					break;
				}
				for (time4 = 0; time4 <= 9; time4++)
				{
					if (time1 == 2 && time2 == 4)
					{
						break;
					}
					_putchar(time1 + '0');
					_putchar(time2 + '0');
					_putchar(':');
					_putchar(time3 + '0');
					_putchar(time4 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
