/* Write a program which accept one number from user and print that
number of even numbers on screen 
input :  7
output : 2 4 6 8 10 12 14    */

#include<stdio.h>

void PrintEven(int iNo)
{
	if(iNo <= 0)
	{
		return;
	}
	/*
	while(iNo > 0)
	{
		printf("%d \n" ,iNo * 2);
		iNo--;
	} */
	int i = 0;
	for(i = 1; i <= iNo; i++)
	{
		printf("%d \n",i * 2);
	}
}

int main()
{
	int iValue = 0;
	printf("Enter Number \n");
	scanf("%d",&iValue);

	PrintEven(iValue);

	return 0;
}