#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double changecm(int inch);
	int value;

	printf("inch���� �Է� : ");
	scanf_s("%d", &value, sizeof(int));

	printf("%dinch��%.2lfcm�Դϴ�.\n", value, changecm(value));

}
double changecm(int inch) {
	return inch * 2.54;
}