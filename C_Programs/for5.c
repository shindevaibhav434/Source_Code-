/* write a program which accept number from user and print even factors of that number. 
input :  36 
output : 2 6 12 18  */

#include<stdio.h>

void PrintEven(int iNo)
{
	int i = 0;
	for(i = 1; i <= iNo; i++)
	{
		if(iNo % i == 0 && i % 2 == 0)
		{
			printf("%d \t",i);
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