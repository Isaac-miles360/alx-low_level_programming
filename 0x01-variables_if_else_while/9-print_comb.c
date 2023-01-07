#include <stdio.h>

/**
 * main- prints all possible combinations of single-digit numbers
 * Numbers must be separated by ,
 * followed by a space
 * Numbers should be printed in ascending order
 * You can only use putchar four times
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
