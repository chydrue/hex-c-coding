#include "holberton.h"
/**
 * print_alphabet_x10 - print a-z 10x
 */

void print_alphabet_x10(void)
{
	int letra;
	int linha;

	linha = 0;

	while (linha < 10)
	{
		letra = 'a';
		while (letra <= 'z')
		{
			_putchar(letra);
			letra++;
		}
		_putchar('\n');
		linha++;
	}
}
