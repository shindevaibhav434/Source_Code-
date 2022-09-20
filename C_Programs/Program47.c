// Accept 2 number from user and display minumum number 

#include<stdio.h>

int Minimum(int iValue1,int iValue2)
{
	int iResult = 0;

	if(iValue1 < iValue2)
	{
		iResult = iValue1;
	}
	else 
	{
		iResult = iValue2;
	}
}

int main()
{
	int iNo1 = 0;
	printf("Enter number 1 :\n");
	scanf("%d",&iNo1);

	int iNo2 = 0;
	printf("Enter number 2 :\n");
	scanf("%d",&iNo2);

	int iNo3 = 0;

	iNo3 = Minimum(iNo1,iNo2);
	printf("Minimum number is %d :",iNo3);

	return 0;

}