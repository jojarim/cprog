#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int month;

	printf("년도의 월(month)을 입력: ");
	scanf("%d", &month);

	if (month == 4 or month == 5)
		printf("%d월은 봄입니다.\n", month);
	else
		if (month == 6 or month == 7 or month == 8)
			printf("%d월은 여름입니다.\n", month);
		else
			if (month == 9 or month == 10 or month == 11)
				printf("%d월은 가을입니다.\n", month);
			else
				if (month == 12 or month == 1 or month == 2 or month == 3)
					printf("%d월은 겨울입니다.\n", month);
				else
					printf("월(month)을 잘못 입력하셨습니다.\n");

	return 0;
}