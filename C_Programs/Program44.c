#include<stdio.h>

void Display(int iNo)
{
	int i = 0;
	for(i = 1; i <= iNo; i++)
	{
		if((iNo % 2 ) == 0)
		{
			printf("# \t");
		}
		else 
		{
			printf("* \t");
		}
	}
}

int main()
{
	int ivalue = 0;

	printf("enter number :\n");
	scanf("%d",&ivalue);

	Display(ivalue);

	return 0;
}