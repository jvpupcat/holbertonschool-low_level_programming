#include <stdio.h>

/**
 * main - main function that calculates the sum of multiples of 3 & 5
 *
 * Return: 0 upon success
 **/
int main(void)
{
	int x;
	int sum;

	for (x = 1; x <= 1024; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			sum = sum + x;
		}
	}
	printf("%d\n", sum);
	return (0);
}
