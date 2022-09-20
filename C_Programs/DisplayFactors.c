#include<stdio.h>

void DisplayFactors(int iValue)
{
	int iCnt = 0;
	for(iCnt = 1;iCnt < iValue; iCnt++)
	{
		if((iValue % iCnt) == 0)
		{
			printf("%d \t",iCnt);
		}
	}
}

int main()
{
	int iNo = 0;

	printf("Enter Number :\n");
	scanf("%d",&iNo);

	DisplayFactors(iNo);

	return 0;
}