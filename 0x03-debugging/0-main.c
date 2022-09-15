#include "main.h"
#include <stdio.h>

/**
 * main - tests function that prints if integer is positive or negative
 *
 * Return: always 0
 *
 */
int main(void)
{
	int i;

	if (i > 0)
	{
		printf("integer is positive\n");
	} else if (i == 0)
	{
		printf("integer is zero\n");
	}
	else
	{
		printf("integer is negative\n");
	}
	return (0);
}
