#include<stdio.h>
#include<stdlib.h>


void backward(char* ,char* );

int main(void)
{
	char string1[80] = {0};

	printf("Enter a string:");
	gets(string1);
	backward(&string1[0],&string1[strlen(string1)-1]);
	puts(string1);
	system("pause");
	return 0;
}

void backward(char* string,char* string1)
{
	char temp;
	if (string < string1)
	{
		temp = *string;
		*string = *string1;
		*string1 = temp;

		string++;
		string1--;

		backward(string, string1);
	}
}