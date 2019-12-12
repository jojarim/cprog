#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define ROWSIZE 2
#define COLSIZE 3

int main(void)
{
	int td[ROWSIZE][COLSIZE];

	td[0][0] = 1; td[0][1] = 2; td[0][2] = 3;
	td[1][0] = 4; td[1][1] = 5; td[1][2] = 6;

	printf("행우선\n\n");
	for (int i = 0; i < ROWSIZE; i++)
	{
		for (int j = 0; j < COLSIZE; j++)
			printf(" %d", td[i][j]);

	}
	printf("\n\n");		

	printf("열우선\n\n");

	for (int j = 0; j < COLSIZE; j++)
	{
		for (int i = 0; i < ROWSIZE; i++)
			printf(" %d", td[i][j]);

	}

	printf("\n\n");

	return 0;

}