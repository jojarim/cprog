#include <stdio.h>

int main(void)
	{
		int a,b,c;
		printf("새수를적으시오: ");
		scanf_s("%d %d %d", &a, &b, &c);
        printf("세수의합: %d\n", a + b + c);

		return 0;

	}