#include <stdio.h>
/**
 * main - prints alphabets except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabets;

	alphabets = 'a';
	while (alphabets <= 'z')
	{
		if (alphabets != 'q' && alphabets != 'e')
		{
			putchar(alphabets);
		}
		alphabets++;
	}
	return (0);
}
