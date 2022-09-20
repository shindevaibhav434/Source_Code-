#include<stdio.h>

// input : 561750
// output : 4

int Display(int iValue)
{
	int iCnt = 0;
	int iSort = 0;
	while(iValue > 0)
	{
		iSort = iValue % 10;
		if(iSort >= 5)
		{
			iCnt++;
		}
		iValue = iValue / 10;
	}
	return iCnt;
}

int main()
{
	int ino = 0;
	int iRet = 0;

	printf("Enter Number :\n");
	scanf("%d",&ino);

	iRet = Display(ino);
	printf("Digits greater than 5 :%d" ,iRet);

	return 0;
}