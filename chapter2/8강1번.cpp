#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char a = '*';

	char* b = &a;

	printf("���� a�� �ּ� = %u, �ڵ尪 = %d, ����=%c\n", (unsigned)& a, a, a);

	printf("���� a�� �ּ� = %u, �ڵ尪 = %d, ����=%c\n", (unsigned)& b, *b, *b);

	return 0;
}

