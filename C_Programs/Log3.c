#include<stdio.h>

void Display(int iNo2)
{
	int i = 0;
	i = 1;
	while(iNo2 >= i)      
	{
		printf("%d \n",i);
		i++;
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