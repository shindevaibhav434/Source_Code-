//Additon of two numbers in c

#include<stdio.h>

int Addition(int,int);

int main()
{
	int ino1 = 0, ino2 = 0, iret = 0;
	
	printf("Enter first Number \n");
	scanf("%d",&ino1);
	
	printf("Enter Second Number \n");
	scanf("%d",&ino2);
	
	iret = Addition(ino1,ino2);
	
	printf("Addition of two Numbers : %d \n",iret);
	
	return 0;
}

int Addition(int iValue1, int iValue2)
{
	int iAdd = 0;
	iAdd = iValue1 + iValue2;
	return iAdd;
}