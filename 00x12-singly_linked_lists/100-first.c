#include "lists.h"

void print_first(void)__attribute__((constructor));

/**
 * print_first - a function that is executed before main
 */

void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
