#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int sum = 0;
	int n;
	scanf("%d", &n);
	int prev_sum = 0;
	int prev_i = 1;

	for (int i = 1; i <= n; i++)
	{
		sum += i;
		
		if (sum > 10000) {
			break;
		}
		prev_sum = sum;
		prev_i = i;
	}


	return 0;
}