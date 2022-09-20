// addition of given number

#include<stdio.h>

int Display(int iNo)
{
	int i = 0;
	int iSum = 0; 
	for(i = 1; i <= iNo; i++)
	{
		iSum = iSum + i;
	}
	return iSum;
}

int main()
{
	int iValue1 = 0;
	int iRet = 0;

	printf("Enter number \n");
	scanf("%d",&iValue1);

	iRet = Display(iValue1);
	printf("%d \t",iRet);

	return 0;
}