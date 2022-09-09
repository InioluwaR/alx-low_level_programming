#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: prints the alphabet in lowercase\n
 * return: always 0 (success)
 *
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
