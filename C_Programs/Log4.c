#include<stdio.h>

int Display(int iValue)
{
	int i = 0;
	int iSum = 0; 
	if(iValue == 0)              // filter 
	{
		printf("your entered number is Zero \n");
		return -1;
	}
	if(iValue < 0)                // updator 
	{
		iValue = -iValue;           
	}
	for(i = 1; i <= iValue; i++)
	{
		iSum = iSum + i;
	}
	return iSum;
}


int main()
{
	int ino = 0;
	int iRet = 0;

	printf("Enter Number :\n");
	scanf("%d",&ino);

	iRet = Display(ino);
	printf("Addition of numbers is : %d",iRet);

	return 0;
}
