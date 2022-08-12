#include "lists.h"

void five_first(void) __attribute__((constructor));

/**
 * 100-first -  that prints You're beat! and yet, you must allow
 * I bore my house upon my back!\n
 * before the main
 * Return: nothing
 */
void five_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
