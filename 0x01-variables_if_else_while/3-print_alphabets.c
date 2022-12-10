#include <stdio.h>
/**
 * main - Entry piont
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)

{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	char upper;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');

	return (0);

}
