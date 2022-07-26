#include "main.h"

/**
 * count_word - helper function count words
 * @s: string
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, n, w;

	flag = 0;
	w = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - splits a string into words
 * @str: string
  * Return: pointer to an array of strings (Success)
 * otherwise NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *temp;
	int i, k = 0, len = 0, words, n = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (n)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (n + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				matrix[k] = temp - n;
				k++;
				n = 0;
			}
		}
		else if (n++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
