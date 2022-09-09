#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: always return 0
 *
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar('a');
	putchar('\n');
	return (0);
}
