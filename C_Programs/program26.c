// Addition of given numbers   67996

#include<stdio.h>

void Display()
{
	int iValue = 67996;
	int iNo = 0;
	int iSum = 0;
	while(iValue > 0)
	{
		iNo = iValue % 10;
		iSum = iSum + iNo;
		iValue = iValue / 10;
	}
	printf("%d\n",iSum);
}

int main()
{
	Display();
	return 0;
}


