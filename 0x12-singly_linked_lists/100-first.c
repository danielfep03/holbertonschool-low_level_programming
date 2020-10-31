#include <stdio.h>

/**
 * start - function is executed before the main
 *
 * Return: Always 0.
 */

void __attribute__((constructor))start()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
