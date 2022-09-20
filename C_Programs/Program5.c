// write a program to display your number

#include<stdio.h>

void Display(int iValue)
{
	int i = 0;
	for(i = 1; i <= iValue; i++)
	{
		printf("Vaibhav_shinde \n",i);
	}
}

int main()
{
	int ino = 0;
	printf("Enter number \n");
	scanf("%d",&ino);

	Display(ino);

	return 0;
}