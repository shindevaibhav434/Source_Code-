// Enter number to display its table 

#include<stdio.h>

void DisplayTable(int iValue)
{
	int i = 0;
	i = 1;
	while(i <= 10)
	{
		printf("%d \n",iValue * i);
		i++;
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