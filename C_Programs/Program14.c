#include<stdio.h>

int Factorial(int);

int main()
{
	int iRet;
	int iNo = 0;
	printf("Enter Number \n");
	scanf("%d",&iNo);

	iRet = Factorial(iNo);
	printf("Factorial is : %d",iRet);

	return 0;
}

int Factorial(int iValue)
{
	int i = 1;
	int iFact = 1;
	while(i <= iValue)
	{
		iFact = iFact * i;
		i++;
	}
	return iFact;
}