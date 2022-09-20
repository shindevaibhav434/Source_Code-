#include<stdio.h>

void DisplayFactors(int iValue)
{
	int iCnt = 1;
	while(iCnt < iValue)
	{
		if((iValue % iCnt) == 0)
		{
			printf("%d \t",iCnt);
		}
		iCnt++;
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