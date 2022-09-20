#include<stdio.h>

typedef unsigned long int UINT;

UINT Factorial(int);

int main()
{
	int iNo = 0;
	UINT iRet = 0;

	printf("Enter Number :\n");
	scanf("%d",&iNo);

	iRet = Factorial(iNo);
	printf("Factorial is :%ld",iRet);

	return 0;
}

UINT Factorial(int iValue)
{
	int i = 0;
	UINT iFact = 1;
	for(i = 1; i <= iValue; i++)
	{
		iFact = iFact * i;
	}
	return iFact;
}