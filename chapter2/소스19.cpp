#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int month;

	printf("�⵵�� ��(month)�� �Է�: ");
	scanf("%d", &month);

	switch (month) {
	case 4: case5:
	printf("%d���� ���Դϴ�.\n", month);
	break;

	case 6: case7: case 8:
		printf("%d���� �����Դϴ�.\n", month);
		break;

	case 9: case10: case11:
		printf("%d���� �����Դϴ�.\n", month);
		break;

	case 12:case 1: case2: case3:
		printf("%d���� �ܿ��Դϴ�.\n", month);
		break;

	default:
		printf("��(month)�� �߸� �Է��ϼ̽��ϴ�.\n");
	}
	
	return 0;
	
}