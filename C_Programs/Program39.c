#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int);
int Check(int);

bool CheckPerfect(int iMake)
{
	int iTemp = 0;
	iTemp = Check(iMake);
	if(iTemp == iMake)
	{
		return true;
	}
	else 
	{
		return false;
	}

}

int Check(int iNo)
{
	int i = 0;
	int iSum = 0;
	for(i = 1; i < iNo; i++)
	{
		if((iNo % i) == 0)
		{
			iSum = iSum + i;
		}
	}
	return iSum;
}

int main()
{
	int iValue = 0;
	bool bRet = false;

	printf("Enter Number :\n");
	scanf("%d",&iValue);

	bRet = CheckPerfect(iValue);
	if(bRet == true)
	{
		printf("This is perfect number ");
	}
	else 
	{
		printf("This is not a perfect number ");
	}
	return 0;
}