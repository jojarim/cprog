#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void incrementary(void incrementary(int ary[], int n, int SIZE));

void printary(int* data, int SIZE);

int main(void)

{
	int data[] = { 4,7,2,3,5 };
	int aryLength = sizeof(data) / sizeof(int);

	printary(data, aryLength);

	incrementary(data, 3, aryLength);

	printary(data, aryLength);

	return 0;
}
void printary(int *data, int SiZE)
{
	for (int i = 0; i < SIZE; i++)
		printf("%2d", data[i]);
	printf("\n");
}