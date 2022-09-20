/* Accept two numbers from user and display first number in second number of times.
input : 12  5 
output : 12 12 12 12 12   */ 

#include<stdio.h>

void Display(int iNo1,int iNo2)
{
	int i = 0;
	for(i = 1; i <= iNo2; i++)
	{
		printf("%d \n",iNo1);
	}
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;

	printf("Enter Number1 :\n");
	scanf("%d",&iValue1);

	printf("Enter Number2 : \n");
	scanf("%d",&iValue2);

	Display(iValue1,iValue2);

	return 0;
}