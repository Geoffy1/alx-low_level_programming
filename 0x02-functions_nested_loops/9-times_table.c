#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int a, b, e;

for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
e = b * a;
if (b == 0)
{
_putchar(e + '0');
}

if (e < 10 && b != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(e + '0');
}
else if (e >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((e / 10) + '0');
_putchar((e % 10) + '0');
}
}
_putchar('\n');
}
}
