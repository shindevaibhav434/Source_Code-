// Check number is even or not 

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
	if((iNo % 2) == 0)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

int main()
{
	int iValue = 0;
	bool bRet = 0;

	printf("Enter number :\n");
	scanf("%d",&iValue);

	bRet = CheckEven(iValue);
	if(bRet == true)
	{
		printf("%d is even number",iValue);
	}
	else
	{
		printf("%d is not even number",iValue);
	}

	return 0;
}