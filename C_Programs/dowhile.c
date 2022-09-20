// Accept one number from user and check display 1 to 5 numbers using while loop


#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	iCnt = 1;                // 1
	do 
	{	
		printf("%d \n",iCnt);     //4 
		iCnt++;               // 3
	}while(iCnt <= iNo);      // 2
}

int main()
{
	int iValue = 0;
	printf("Enter Number :\n");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}