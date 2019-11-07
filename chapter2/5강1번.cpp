#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{

	int a, b;
	printf("두 정수를 입력하시오 : ");
	scanf("%d %d", &a, &b);

	if (a > b)
		printf("%d \n %d", a / b, a % b);
	else if (a < b)
		printf("%d \n %d", b / a, b % a);
	else
		printf("정수가 같습니다");

	return 0;

}