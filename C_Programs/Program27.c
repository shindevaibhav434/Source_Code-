#include<stdio.h>

int Display(int iCatch)
{
	int iNo = 0;
	int iSum = 0;
	while(iCatch > 0)
	{
		iNo = iCatch % 10;
		iSum = iSum + iNo;
		iCatch = iCatch / 10;
	}
	return iSum;
}

int main()
{
	int iNo = 0;
	int iRet = 0;

	printf("Enter Number :\n");
	scanf("%d",&iNo);

	iRet = Display(iNo);
	printf("Addition is : %d",iRet);

	return 0;
}