#include<stdio.h>

typedef unsigned long int UINT;

int Display(int iValue)
{
	int i = 0;
	UINT iFact = 1;
	for(i = 1; i <= iValue; i++)
	{
		iFact = iFact * i;
	}
	return iFact;
}

int main()
{
	int iValue = 0;
	UINT iRet = 0;

	printf("Enter numbers : \n");
	scanf("%d",&iValue);

	iRet = Display(iValue);
	printf("Factorial is : %d",iRet);

	return 0;
}