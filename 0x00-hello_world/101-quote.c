#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 1 on success
 **/
int main(void)
{
	int x;
	char *a;

	a = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	for(x = 0; a[x] != '\0'; x++)
	{
		putchar(a[x]);
	}
	putchar('\n');
	return (1);
}
