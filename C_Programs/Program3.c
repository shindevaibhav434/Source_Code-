// Display numbers

#include<stdio.h>

void Display(int);

int main()
{
	int ino1 = 0;
	printf("Enter Number :");
	scanf("%d",&ino1);

	Display(ino1);

	return 0;
}

void Display(int iValue)
{
	int i = 0;
	for(i = 1; i <= iValue; i++)
	{
		printf("%d \n",i);
	}
}