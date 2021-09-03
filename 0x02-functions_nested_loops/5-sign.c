#include "holberton.h"
/**
 * print_sign - Testar se um número é positivo, negativo ou zero
 * @n: número que será testado
 * Return: 1 se for positivo, 0 se for zero, -1 se for negativo
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
