#include<stdio.h>

int Display(int iCatch)
{
	int iNo = 0;
	int iCnt= 0;
	if(iCatch == 0)     // filter
	{
		return 1;
	}
	if(iCatch < 0)     // unput updator 
	{
		iCatch = -iCatch;
	}
	while(iCatch > 0)
	{
		iNo = iCatch % 10;
		iCnt++;
		iCatch = iCatch / 10;
	}
	return iCnt;
}

int main()
{
	int iNo = 0;
	int iRet = 0;

	printf("Enter Number :\n");
	scanf("%d",&iNo);

	iRet = Display(iNo);
	printf("Number of digits are : %d",iRet);

	return 0;
}