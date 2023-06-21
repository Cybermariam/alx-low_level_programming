#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet,in lowercase
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	int letterCount = 0;
	char letter;

	while (letterCount < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		letterCount++;
	}
}
