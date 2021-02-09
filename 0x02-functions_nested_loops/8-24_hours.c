#include <stdio.h>
#include "holberton.h"

void jack_bauer(void);

{

int (HourTen, MinuteTen, HourOne, Minuteone);
for (HourTen = '0'; HourTen <= '2'; HourTen++)

for (HourOne = '0'; HourOne <= '9'; HourOne++)
{
for (MinuteTen = '0'; MinuteTen <= '5'; MinuteTen++)
{
for (Minuteone = '0'; Minuteone <= '9'; Minuteone++)
{

if (HourTen == 2 && HourOne >= 4)
{
break;
}

if (MinuteTen == 5 && Minuteone == 9)
{
break;
}
else
{
putchar (HourTen);
putchar (HourOne);
putchar (':');
putchar (MinuteTen);
putchar (Minuteone);
putchar ('\n');
}

}
}
}
return (0);
}
