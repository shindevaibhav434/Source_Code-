// Number is palindrome or not 

#include<stdio.h>
#include<stdbool.h>

bool Display(int iValue)
{
	int iCatch = 0;
	int iRev = 0;
	int iTemp = iValue;
	while(iValue != 0)
	{
		iCatch = iValue % 10;
		iRev = (iRev * 10) + iCatch;
		iValue = iValue / 10;
	}
	if(iTemp == iRev)
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
	int iNo = 0;
	bool bRet = false;

	printf("Enter number : \n");
	scanf("%d",&iNo);

	bRet = Display(iNo);
	if(bRet == true)
	{
		printf("%d is palindrome ",iNo);
	}
	else 
	{
		printf("%d is not palindrome ",iNo);
	}

	return 0;
}