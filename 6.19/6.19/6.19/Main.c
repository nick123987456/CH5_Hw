#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(void)
{
	int i, j, number[11] = { 0 };

	srand(time(0));

	for (i = 0; i < 36000;i++)
	{
		j = (1 + (rand() % 6)) +(1+(rand() % 6));
		number[j-2]++;
	}

	for (i = 0; i < 11; i++)
	{
		printf("%d = %d¦¸\n", i+2, number[i]);
	}

	system("pause");
	return 0;
}