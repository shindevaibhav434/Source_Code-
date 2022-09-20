//Accept one from user and check whether it is divisible by 5 or not 

#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
	if((iNo % 5) == 0)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

int main()
{
	int iValue1 = 0;
	bool bRet = 0;

	printf("Enter Number :");
	scanf("%d",&iValue1);

	bRet = Check(iValue1);
	if(bRet == true)
	{
		printf("it is divisible by 5");
	}
	else
	{
		printf("it is not divisible by 5");
	}

	return 0;

}