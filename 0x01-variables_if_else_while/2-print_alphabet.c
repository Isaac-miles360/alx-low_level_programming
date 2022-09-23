#include <stdio.h>

/**
 * main- prints the alphabet in lowercase
 * followed by a new line
 * can only use putchar
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
