#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int j, i;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 4; j > 0; j--)
			if (j > i + 1)
			{
				printf(" ");
			}
			else
				printf("*");
		puts("");
	}
	return 0;
}