#include <stdio.h>

/**
 * main - Função principal
 *
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
		{
			i++;
		}
		putchar(i);
	}
	putchar('\n');

	return (0);
}
