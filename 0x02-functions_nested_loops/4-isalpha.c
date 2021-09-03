#include "holberton.h"
/**
 * _isalpha - confere se é uma letra
 * @c: variável que será testada
 * Return: 1 se for letra 0 caso contrário
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
