#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below
 * 1024 (excluded), followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long int a, b, c, sum;

for (a = 0; a < 1024; a++)
{
b = a / 3;
c = a / 5;
if ((a % 3) == 0)
{
sum = sum + b;
}
else if ((a % 5) == 0)
{
sum = sum + c;
}
}
printf("%lu\n", sum);
return (0);
}
