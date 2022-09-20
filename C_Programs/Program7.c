#include<stdio.h>

int Addition(int);

int main()
{
	int iNo = 0;
	int iRet = 0;

	printf("Enter Number \n");
	scanf("%d",&iNo);

	iRet = Addition(iNo);
	printf("Addition of numbers : %d " ,iRet);

	return 0;
}

int Addition(int iValue)
{
	int i = 0;
	int iSum = 0;

	for(i = 1; i <= iValue; i++)
	{
		iSum = iSum + i;
	}

	return iSum;
}