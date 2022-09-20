// Number of even digits 

#include<stdio.h>

int Display(int iValue)
{
	int iCatch = 0;
	int iSum = 0;
	if(iValue < 0)
	{
		iValue = -iValue;
	}
	while(iValue > 0)
	{
		iCatch = iValue % 10;
		if((iCatch % 2) == 0)
		{
			printf("%d\t",iCatch);
			iSum = iSum + iCatch;
		}
		iValue = iValue / 10;
	}
	return iSum;
}

int main()
{
	int ino1 = 0;
	int iRet = 0;

	printf("Enter number :\n");
	scanf("%d",&ino1);

	iRet = Display(ino1);
	printf("Addition of even digits are : %d",iRet);

	return 0;

}
