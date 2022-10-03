#include "main.h"
#include <stddef.h>
/**
 * *_strchr - locates a character in a string
 * @s: string to be searched
 * @c: char to locate
 * Return: a pointer to the character otherwise NULL
 */
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
			return (s - 1);
			}
			if (a == 0)
			{
			return (NULL);
			}
		}
}
