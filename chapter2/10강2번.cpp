#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int intpow(int m, int n);
	int a1, a2;

	printf("�� ���� ���� ���� �Է� : ");
	scanf_s("%d %d", &a1, &a2, sizeof(int));

	printf("%d�� %d�� = %d", a1, a2, intpow(a1, a2));
}
int intpow(int m, int n) {
	int output = 1;
	for (int i = 0; i < n; i++)
	{
		output *= m;
	}
	return output;
}