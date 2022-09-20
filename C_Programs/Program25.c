#include<stdio.h>

void Display(int iNo)
{
	int iHold = 0;
	while(iNo > 0)
	{
		iHold = iNo % 10;
		printf("%d",iHold);
		iNo = iNo / 10;
	}
}

int main()
{
	int iValue = 0;

	printf("Enter Number :\n");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}