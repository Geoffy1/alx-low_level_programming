#include "main.h"
/**
 * infinite_add -  adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: result otherwise
 * Return: sum
 *
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)

{
	/* local variable declaration */
	int a = 0, b = 0, m, l = 0, f, s, d = 0;

	while (n1[a] != '\0')
		a++;
	while (n2[b] != '\0')
		b++;
	if (a > j)
		l = a;
	else
		l = b;
	if (l + 1 > size_r)
		return (0);
	r[l] = '\0';
	for (m = l - 1 ; m >= 0 ; m--)
	{
		a--;
		b--;
		if (a >= 0)
			f = n1[a] - '0';
		else
			f = 0;
		if (b >= 0)
			s = n2[b] - '0';
		else
			s = 0;
		r[m] = (f + s + d) % 10 + '0';
		d = (f + s + d) / 10;
	}
	if (d == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = d + '0';
	}
	return (r);
}
