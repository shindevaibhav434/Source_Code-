#include<stdio.h>

int Display(int iNo)
{
	int i = 0;
	int iFact = 1;
	for(i = 1; i <= iNo; i++)
	{
		iFact = iFact * i;
	}
	return iFact;
}

int main()
{
	int iValue1 = 0;
	int iRet = 0;

	printf("Enter number \n");
	scanf("%d",&iValue1);

	iRet = Display(iValue1);
	printf("%d \n",iRet);
	
	return 0;
}