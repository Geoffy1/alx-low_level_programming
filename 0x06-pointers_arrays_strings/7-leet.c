#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */

char *leet(char *s)
{
	int j;
	int k;
	char l[] = "ol_ea__t";

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; l[k] != '\0'; k++)
		{
			if (s[j] == l[k] || s[j] == (l[k] - 32))
			{
				s[j] = k + '0';
			}
		}
	}
	return (s);
}
