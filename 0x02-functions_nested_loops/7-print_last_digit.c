#include "holberton.h"
/**
 * print_last_digit - Escreve o último dígito de um número
 * @num: número que será utilizado
 * Return: último dígito
 */
int print_last_digit(int num)
{
	int lastDig;

	lastDig = num % 10;

	if (num < 0)
	{
		lastDig *= -1;
		_putchar(lastDig + '0');
		return (lastDig);
	}
	else if (lastDig > 0)
	{
		_putchar(lastDig + '0');
		return (lastDig);
	}
	else
	{
		_putchar(num + '0');
		return (num);
	}
}
