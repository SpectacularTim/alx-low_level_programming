#include <stdio.h>
/**
 * main - prints alphaBETS
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lowercase_alphabets = 'a';

	while (lowercase_alphabets <= 'z')
	{
		putchar(lowercase_alphabets);
		lowercase_alphabets++;
	}

	int uppercase_alphabets = 'A';

	while (uppercase_alphabets <= 'Z')
	{
		putchar(uppercase_alphabets);
		uppercase_alphabets++;
	}
	putchar('\n');
	return (0);
}
