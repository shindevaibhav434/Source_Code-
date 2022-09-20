// input : 3
// output : 6

// input : 5
// output : 15

#include<stdio.h>

int Addition(int);

int main()
{
	int iNo = 0, iRet = 0;

	printf("Enter number \n");
	scanf("%d",&iNo);

	iRet = Addition(iNo);

	printf("Addition is : %d \n",iRet);

	return 0;
}

int Addition(int iValue)
{
	int i = 0;
	int iSum = 0;

	if(iValue < 0)       // updator
	{
		iValue = - iValue;
	}
	//    1        2          3
	for(i = 1; i <= iValue; i++)
	{
		iSum = iSum + i;   //4 
	}
	return iSum;
}