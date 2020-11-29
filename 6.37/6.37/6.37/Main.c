#include<stdio.h>
#include<stdlib.h>

void maximun(int a[], int *max,int number);
void minimun(int a[], int *min,int number);

int main(void)
{
	int a[10] = { 6,8,9,56,85,95,32,5,4,91 }, i, max=a[0],min=a[0];

	maximun(a, &max, 1);
	minimun(a, &min, 1);

	printf("MAX=%d\nMIN=%d\n", max, min);

	system("pause");
	return 0;
}

void maximun(int a[], int *maxnumber,int number)
{
	if (*maxnumber < a[number])
		*maxnumber = a[number];
	if (number < 9)
		maximun(a, maxnumber, number + 1);
}

void minimun(int a[], int *minnumber, int number)
{
	if (*minnumber > a[number])
		*minnumber = a[number];
	if (number < 9)
		minimun(a, minnumber, number + 1);
}