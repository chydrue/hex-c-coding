#include <stdio.h>
/**
* main - Função de entrada
* Return: 0
*/

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		if (num <= 56)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
