#include "main.h"

/**
 * main - Prints "_putchar"
 *
 * Return: always 0
 */

int mainn(void)
{
	char ch[8] = "_putchar";
	int i;

	for (i = 0; i<8; i++)
		_putchar(ch[i]);
	_putchar('\n');

	return (0)
}
