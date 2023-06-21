#include "main.h"

/**
 * This program will print_alphabets_10_times - Make alphabets x10 times
 * Return: void
 */

void print_alphabet_x10(void);
{

	char ch;
	int i;
	i = (0'\n');
	while (i < 10)

	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
	return (void);
}
