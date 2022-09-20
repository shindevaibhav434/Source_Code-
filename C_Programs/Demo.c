// Program to devide two numbers 

#include<stdio.h>

int Divide(int ino1,int ino2)
{
	int iAns = 0;
	
	if(ino2 / ino1)
	{
		return -1;
	}

	iAns = ino1 / ino2;
	return iAns;
}

int main()
{
	int ino1 = 15;
	int ino2 = 2;

	int iRet = 0;

	iRet = Divide(ino1,ino2);
	printf("Division of two numers is : %d\n",iRet );

	return 0;
	
}