#include<stdio.h>
#include<stdlib.h>

int binarysearch(const int a[],int n,int m);

int main(void)
{
	const int a[10] = { 6,8,12,18,35,46,48,59,69 };
	int	i,number;

	printf("Enter number:");
	scanf_s("%d", &number);
	if (binarysearch(a , number,4) !=- 1)
	{
		printf("Find %d\n", number);
	}
	else
	{
		printf("Not find %d\n", number);
	}
	system("pause");
	return 0;
}

int binarysearch(const int a[], int n, int m)
{
	if (n == a[m])
	{
		return n;
	}
	else if(n > a[m]&&m<10)
	{
		binarysearch(a, n, m+1);
	}
	else if (n < a[m] && m > 0)
	{
		binarysearch(a, n, m - 1);
	}
	else
	{
		return -1;
	}
}
