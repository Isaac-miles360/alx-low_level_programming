#include <stdio.h>

/**
 * main - prints all single digit number of
 * base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	while(n <= 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
