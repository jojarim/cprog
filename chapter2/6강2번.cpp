#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a, b;
	int c;

	printf("�� �Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &a, &b);

	printf("�������� ��ȣ���� 1 < + > , 2 < - > , 3 < * > , 4 < / > : ");
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
			printf("���������� �߸� �Է��ϼ̽��ϴ�..\n");

	return 0;
}