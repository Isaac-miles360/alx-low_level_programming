#include <stdio.h>

/**
 * main- prints all possible different combinations of three digits
 * The three digits must be different
 * Numbers should be printed in ascending order
 * You can only use putchar six times
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, n2, n3;

	for (n = 48; n < 58; n++)
	{
		for (n2 = 49; n2 < 58; n2++)
		{
			for (n3 = 50; n3 < 58; n3++)
			{
				if (n3 > n2 && n2 > n)
				{
					putchar(n);
					putchar(n2);
					putchar(n3);
					if (n != 55 || n2 != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
