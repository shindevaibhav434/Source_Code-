#include<stdio.h>

void Display()
{
	int iValue = 5686;
	printf("%d\n",iValue);
	int iNo = 0;

	while(iValue > 0)
	{
		iNo = iValue % 10;    // 6     8      6    5
		printf("%d",iNo);   // 6     8 	  6    5
		iValue = iValue / 10;  //568   56     5    0 
	}
}

int main()
{
	Display();
	return 0;
}