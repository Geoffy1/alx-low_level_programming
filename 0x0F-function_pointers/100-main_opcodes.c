#include "function_pointers.h"

/**
 * main - prints its own opcodes
 * @argc: number of parameters
 * @argv: array of parameters
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *p;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
	printf("Error\n");
	exit(2);
	}

	p = (char *)main;

	for (i = 0; i < bytes; i++)
	{
	if (i == bytes - 1)
	{
	printf("%02hhx\n", p[i]);
	break;
	}
	printf("%02hhx ", p[i]);
	}
	return (0);
}
