#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int angle;

	printf("������ �Է�: ");
	scanf("%d", &angle);

	if (angle >0 and angle < 90)
		printf("%d���� 1��и��Դϴ�.\n", angle);
	else if (angle > 90 and angle < 180)
		printf("%d���� 2��и� �Դϴ�.\n", angle);
	else if (angle > 180 and angle < 270)
		printf("%d 3��и� �Դϴ�.\n", angle);
	else if (angle > 270 and angle < 360)
		printf("%d 4��и� �Դϴ�.\n", angle);
	else if (angle == 0)
		printf("%d ���� x�� �Դϴ�.\n", angle);
	else if (angle == 90)
		printf("%d ���� y�� �Դϴ�.\n", angle);
	else if (angle == 180)
		printf("%d ���� x�� �Դϴ�.\n", angle);
	else if (angle == 270)
		printf("%d ���� y�� �Դϴ�.\n", angle);
						
	else
		printf("������ �߸� �Է��ϼ̽��ϴ�.\n");

	return 0;
}