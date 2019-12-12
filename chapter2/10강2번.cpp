#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int intpow(int m, int n);
	int a1, a2;

	printf("두 개의 정수 값을 입력 : ");
	scanf_s("%d %d", &a1, &a2, sizeof(int));

	printf("%d의 %d승 = %d", a1, a2, intpow(a1, a2));
}
int intpow(int m, int n) {
	int output = 1;
	for (int i = 0; i < n; i++)
	{
		output *= m;
	}
	return output;
}