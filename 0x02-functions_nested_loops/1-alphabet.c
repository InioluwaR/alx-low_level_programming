#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Description: A function that prints alphabet
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchat(i);
	}
	_putchar('\n');
}
