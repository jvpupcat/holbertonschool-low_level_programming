#include <stdio.h>

/**
 *
 *
 *
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
