// Enter number to display its table 

#include<stdio.h>

void DisplayTable(int iValue)
{
	int i = 0;
	for(i = 1; i <= 10; i++)
	{
		printf("%d \n",iValue * i);
	}
}

int main()
{
	int iNo = 0;
	printf("Enter Numbe to display its table \n");
	scanf("%d",&iNo);

	DisplayTable(iNo);

	return 0;
}