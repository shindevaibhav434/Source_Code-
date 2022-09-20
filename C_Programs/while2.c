// Accept one number from user and print that number of 1 to 5 on screen .

#include<stdio.h>

void Display(int iNo)
{
	int i = 0;
	while(i <= iNo)
	{
		printf("%d \n",i);
		i++;
	}
}

int main()
{
	int iValue = 0;
	printf("Enter Number :\n");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}