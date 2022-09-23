#include <stdio.h>

/**
 * main- prints the alphabet in lowercase
 * Print all the letters except q and e
 * followed by a new line
 * You can only use putchar twice
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
