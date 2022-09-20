/* Write a program which accept number from user and print event factors
of that numbers. 
input :  24
output : 1 2 4 6 8 12  */

#include<stdio.h>

void PrintEven(int iNo)
{
	int i = 0;
	for(i = 1; i <= iNo/2; i++)
	{
		if((iNo % i) == 0)
		{
			printf("%d \n",i);
		}
	}
}

int main()
{
	int iValue = 0;
	printf("Enter Number \n");
	scanf("%d",&iValue);

	PrintEven(iValue);

	return 0;
}