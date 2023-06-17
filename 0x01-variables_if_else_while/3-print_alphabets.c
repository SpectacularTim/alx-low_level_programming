#include <stdio.h>
/**
 * main - prints alphaBETS
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabets = 'a';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets++;
	}

	int alphabets = 'A';

	while (alphabets <= 'Z')
	{
		putchar(alphabets);
		alphabets++;
	}
	putchar('\n');
	return (0);
}
