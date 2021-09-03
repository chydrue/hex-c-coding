#include "holberton.h"
/**
 * _abs - retorna o valor absoluto de um inteiro
 * @i: número que será testado
 * Return: 0
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
		return (i);
	}
	else if (i > 0)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}
