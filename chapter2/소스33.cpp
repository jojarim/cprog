#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int data = 100; char ch = 'A';
	int* ptrint = &data;
	char* ptrchar = &ch;
	printf("�������� ���: %d %c\n", *ptrint, *ptrchar);

	*ptrint = 200;
	printf("�������� ���: %d %c\n", data, ch);

	return 0;
}