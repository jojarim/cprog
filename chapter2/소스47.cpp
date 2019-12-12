#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 3, b = 5;
	int add2(int a, int b);

	int sum = add2(a, b);

	printf("ÇÕ: %d\n", sum);
	±«Â¥ °¡Á·

	return 0;
}
int add2(int a, int b)
{
	int sum = a + b;

	return(sum);
}

int findMin2(int x, int y)
{
	int min = x < y ? x : y;

	return (min);

}

int findMax2(int x, int y)
{
	int max = x > y ? x : y;

	return (max);

}