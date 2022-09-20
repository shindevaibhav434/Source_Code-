#include<stdio.h>
int Factorial(int);
int main()
{
	int iNo = 0, iRet = 0;
	printf("Enter Number :\n");
	scanf("%d",&iNo);

	iRet = Factorial(iNo);
	printf("Factorial is : %d",iRet);

	return 0;
}

int Factorial(int iValue)
{
	int i = 0;
	int iFact = 1;
	//  1         2          3
	for(i = 1; i <= iValue; i++)
	{
		iFact = iFact * i;   // 4
	}
	return iFact;
}