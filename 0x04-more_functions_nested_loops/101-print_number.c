#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}

if (n == 0)
{
_putchar('0');
}
else
{
if (n / 10)
{
_putchar(n % 10 + '0');
n = -1;
}
else
{
_putchar((n % 10) + '0');
m /=10;
}
}
}
