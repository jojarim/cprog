#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int data = 100; char ch = 'A';
	int* ptrint = &data;
	char* ptrchar = &ch;
	printf("간접참조 출력: %d %c\n", *ptrint, *ptrchar);

	*ptrint = 200;
	printf("직접참조 출력: %d %c\n", data, ch);

	return 0;
}