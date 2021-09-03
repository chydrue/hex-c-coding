#include "holberton.h"
/**
 * _islower - confere se a letra é minúscula
 * @c: variável que será testada
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
