#include <stdio.h>
/**
 * main - prints lowercase alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar("\n");
	Return(0);
}
