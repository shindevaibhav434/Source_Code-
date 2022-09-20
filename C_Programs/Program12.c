#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int);

int main()
{
	int iNo = 0;
	bool bRet = false;

	printf("Enter Number : \n");
	scanf("%d",&iNo);

	bRet = CheckEven(iNo);
	if(bRet == true)
	{
		printf("%d is even",iNo);
	}
	else
	{
		printf("%d is not even",iNo);
	}

	return 0;
}

bool CheckEven(int iValue)
{
	if((iValue %2) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}