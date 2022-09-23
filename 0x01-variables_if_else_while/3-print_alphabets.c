#include <stdio.h>

/**
 * main- prints the alphabet in lowercase
 * and then in uppercase
 * followed by a new line
 * can only use putchar three times
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha = 'a';
	int alpha2 = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (alpha2 <= 'Z')
	{
		putchar(alpha2);
		alpha2++;
	}
	putchar('\n');
	return (0);
}
