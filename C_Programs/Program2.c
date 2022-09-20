#include<stdio.h>

void Display(int);

int main()
{
	int ino = 0;
	printf("Enter Number ");
	scanf("%d",&ino);
	Display(ino);
	return 0;
	
}

void Display(int iValue)
{
	int i = 0;
	for(i = 1; i<= iValue; i++)
	{
		printf("Numbers is : %d \n",i);
	}
}