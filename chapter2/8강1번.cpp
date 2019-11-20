#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char a = '*';

	char* b = &a;

	printf("변수 a의 주소 = %u, 코드값 = %d, 문자=%c\n", (unsigned)& a, a, a);

	printf("변수 a의 주소 = %u, 코드값 = %d, 문자=%c\n", (unsigned)& b, *b, *b);

	return 0;
}

