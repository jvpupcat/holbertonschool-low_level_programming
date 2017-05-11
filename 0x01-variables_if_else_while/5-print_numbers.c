#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: zero upon success
 **/
int main(void)
{
	int x;

	x = 0;

	while (x <= 9)
	{
		printf("%i", x);
		x++;
	}
	printf("\n");
	return (0);
}
