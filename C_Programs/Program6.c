#include<stdio.h>

void Display(int);

int main()
{
	int iNo = 0;
	printf("Enter number :");
	scanf("%d",&iNo);

	Display(iNo);

	return 0;
}

void Display(int iValue)
{
	int i = 0;
	for(i = iValue; i >= 1; i--)
	{
		printf("%d \n",i);
	}
}