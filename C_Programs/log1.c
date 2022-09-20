#include<stdio.h>

void Display(int iNo2)
{
	int i = 0;

	if(iNo2 == 0)         // filter
	{
		printf("You entered number is 0 \n");
		return;
	}

	if(iNo2 < 0)           // input updator
	{
		iNo2 = -iNo2;
	}

	for(i = iNo2; i > 0; i--)
	{
		printf("%d \n",i);
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