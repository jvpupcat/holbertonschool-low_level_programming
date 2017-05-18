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
	long int even_sum = 2;

	for (c = 3; c < 33; c++)
	{
		if (c <= 1)
			next = c;
		else
		{
			next = first + second;
			first = second;
			second = next;
			if (next % 2 == 0)
			{
				even_sum = even_sum + next;
			}
		}
	}
	printf("%ld", even_sum);
	putchar('\n');
	return (0);
}
