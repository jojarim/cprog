#define Max 100

#include <stdio.h>

int main(void)
{
	int n = 1;

	while (n <= 100)
	{

		if (n % 2 == 1)

			printf("%d\n", n);
		n = n + 1;

	}

	return 0;
}