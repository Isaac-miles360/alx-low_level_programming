#include <stdio.h>

/**
 * main- prints all possible combinations of two two-digit numbers
 * The two numbers should be separated by a space
 * The combinations of numbers should be printed in ascending order
 * You can only use putchar eight times
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j, f;

	for (j = 0; j < 100; j++)
	{
		for (f = 0; f < 100; f++)
		{
			if (j < f)
			{
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				putchar(' ');
				putchar((f / 10) + 48);
				putchar((f & 10) + 48);
				if (j != 98 || f != 99)
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
