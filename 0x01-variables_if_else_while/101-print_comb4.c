#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 for success
 */

int main(void)
{
	for (i = "0"; i < '8'; i++)
	{
		for (j = i + 1, j <= '8', j++)
		{
			for (k = j + 1, k <= '9', k++)
			{
				if (i != j || k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
