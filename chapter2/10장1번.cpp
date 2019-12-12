#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double changecm(int inch);
	int value;

	printf("inch값을 입력 : ");
	scanf_s("%d", &value, sizeof(int));

	printf("%dinch는%.2lfcm입니다.\n", value, changecm(value));

}
double changecm(int inch) {
	return inch * 2.54;
}