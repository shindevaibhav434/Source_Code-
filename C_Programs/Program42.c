#include<stdio.h>

int Power(int iValue1,int iValue2)
{
	int i = 0;
	int iSub = 1;
	for(i = 1; i <= iValue2; i++)
	{
		iSub = iSub * iValue1;
	}
	return iSub;
}

int main()
{
	int iNo1 = 0, iNo2 = 0,iRet = 0;

	printf("Enter Number 1: \n");
	scanf("%d",&iNo1);

	printf("Enter Number 2: \n");
	scanf("%d",&iNo2);

	iRet = Power(iNo1,iNo2);
	printf("Result is : %d \n",iRet);

	return 0;
}