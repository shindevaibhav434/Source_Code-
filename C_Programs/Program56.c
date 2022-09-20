/*
Rows : 3
columns : 3
 1  2  3
 1  2  3
 1  2  3   */

#include<stdio.h>

void Display(int iValue1,int iValue2)
{
	int i = 0;
	int j = 0;

	for(i = 1; i <= iValue1; i++)    // outer
	{
		for(j = 1; j <= iValue2; j++)   // inner 
		{
			printf("%d \t",j);
		}
		printf("\n");
	}
}

int main()
{
	int iNo1 = 0;
	int iNo2 = 0;

	printf("Enter Number of Rows \n");
	scanf("%d",&iNo1);

	printf("Enter Number of columns \n");
	scanf("%d",&iNo2);

	Display(iNo1,iNo2);

	return 0;
}