#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define SIZE 3
int main(void)
{
	int *pray[SIZE] = { NULL };

	int a = 10, b = 20, c = 30;

	pray[0] = &a;
	pray[1] = &b;
	pray[2] = &c;
	for (int i = 0; i < SIZE; i++)
		printf("*pray[%d] = %d\n", i, *pray[i]);

	for(int i = 0; i < SIZE; i++)
	{
		scanf("%d", pray[i]);
		printf("%d,%d,%d\n", a, b, c);
	}

	return 0;

}