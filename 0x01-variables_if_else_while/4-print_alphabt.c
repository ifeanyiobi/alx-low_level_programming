#include <stdio.h>


/**
 * main - program that prints the alphabet in lowercase and upper case with the exception of e and q
 *
 * Return: whenever  0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
	if (letter != 'e' && letter != 'q')
	putchar(letter);
	}

	putchar('\n');

	return (0);
}

