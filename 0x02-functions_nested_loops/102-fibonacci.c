#include <stdio.h>


/**
 * main - entry point
 *
 * Return: 0 upon success
 **/
int main(void)
{
	long int c, next;
	long int first = 1;
	long int second = 2;

	for (c = 1; c < 51; c++)
	{
		if (c <= 1)
			next = c;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		printf("%ld", next);
		if (c > 0 && c < 50)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
