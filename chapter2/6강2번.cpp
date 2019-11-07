#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a, b;
	int c;

	printf("두 실수를 입력하시오: ");
	scanf("%lf %lf", &a, &b);

	printf("연산종류 번호선택 1 < + > , 2 < - > , 3 < * > , 4 < / > : ");
		scanf("%d", &c);

		if (c == 1)
			printf("%.2lf+%.2lf = %.2lf", a, b, a + b);
		else if (c == 2)
			printf("%.2lf-%.2lf = %.2lf", a, b, a - b);
		else if (c == 3)
			printf("%.2lf*%.2lf = %.2lf", a, b, a * b);
		else if (c == 4)
			printf("%.2lf/%.2lf = %.2lf", a, b, a / b);
		else
			printf("연산종류를 잘못 입력하셨습니다..\n");

	return 0;
}