// Display factors 

#include<stdio.h>

int DisplayFactorials(int);

int main()
{
	int iNo = 0;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    
    DisplayFactorials(iNo);
    
    return 0;
}

int DisplayFactorials(int iValue)
{
	int i = 0;
	for(i = 1;i <= (iValue / 2) ; i++)
	{
		if((iValue % i) == 0)
		{
			printf("Factors are : %d\n",i);
		}
	}
}