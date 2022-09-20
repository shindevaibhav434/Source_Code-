#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iValue)
{
	int i = 0;
	int iSum = 0;
	for(i = 1; i < iValue; i++)
	{
		if((iValue % i) ==  0)
		{
			iSum = iSum + i;
		}
	}
	if(iSum == iValue)
	{
		printf("This is a Perfect number \n");
	}
	else 
	{
		printf("This is a not Perfect \n");
	}

}

int main()
{
	int iNo = 0;

	printf("Enter Number :\n");
	scanf("%d",&iNo);

	CheckPerfect(iNo);

	return 0;
}