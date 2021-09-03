@include "holberton.h"
/**
 * print_alphabet - print a-z
 *
 */
void print_alphabet(void)
{
	char alfabeto[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; alfabeto[i] != '\0'; i++)
	{
		_putchar(alfabeto[i]);
	}
}
