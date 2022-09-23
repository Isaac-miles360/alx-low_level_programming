#include <stdio.h>

/**
 * main- prints all possible different combinations of two digits
 * Numbers must be separated by ,followed by a space
 * The two digits must be different
 * Numbers should be printed in ascending order
 * You can only use putchar five times
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, n2;

	for (n = 48; n <= 56; n++)
	{
		for (n2 = 49; n2 <= 57; n2++)
		{
			if (n2 > n)
			{
				putchar(n);
				putchar(n2);
				if (n != 56 || n2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
