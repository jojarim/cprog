#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 10;

	int *p = &a;

	int b = *p;

	*p = 20;

	int **pp = &p;

	int c = **pp;

	**pp = 30;

	printf("%d¿Ã¥Ÿ", a);


		return 0;
}