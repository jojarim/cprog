#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int month;

	printf("�⵵�� ��(month)�� �Է�: ");
	scanf("%d", &month);

	if (month == 4 or month == 5)
		printf("%d���� ���Դϴ�.\n", month);
	else
		if (month == 6 or month == 7 or month == 8)
			printf("%d���� �����Դϴ�.\n", month);
		else
			if (month == 9 or month == 10 or month == 11)
				printf("%d���� �����Դϴ�.\n", month);
			else
				if (month == 12 or month == 1 or month == 2 or month == 3)
					printf("%d���� �ܿ��Դϴ�.\n", month);
				else
					printf("��(month)�� �߸� �Է��ϼ̽��ϴ�.\n");

	return 0;
}