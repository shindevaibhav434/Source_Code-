#include<stdio.h>

void Display(int iNo2)
{
	while(iNo2 > 0)
	{
		printf("%d \n",iNo2);
		iNo2--;
	}
}

int main()
{
	int iNo = 0;
	printf("Enter number :\n");
	scanf("%d",&iNo);

	Display(iNo);

	return 0;
}