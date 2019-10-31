#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int angle;

	printf("각도를 입력: ");
	scanf("%d", &angle);

	if (angle >0 and angle < 90)
		printf("%d각은 1사분면입니다.\n", angle);
	else if (angle > 90 and angle < 180)
		printf("%d각은 2사분면 입니다.\n", angle);
	else if (angle > 180 and angle < 270)
		printf("%d 3사분면 입니다.\n", angle);
	else if (angle > 270 and angle < 360)
		printf("%d 4사분면 입니다.\n", angle);
	else if (angle == 0)
		printf("%d 양의 x축 입니다.\n", angle);
	else if (angle == 90)
		printf("%d 양의 y축 입니다.\n", angle);
	else if (angle == 180)
		printf("%d 음의 x축 입니다.\n", angle);
	else if (angle == 270)
		printf("%d 음의 y축 입니다.\n", angle);
						
	else
		printf("각도를 잘못 입력하셨습니다.\n");

	return 0;
}