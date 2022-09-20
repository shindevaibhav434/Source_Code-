#include<stdio.h>

void Display(int iValue)
{
	int i = 0;
	for(i = iValue; iValue > 0;iValue--)
	{
		printf("%d \n",iValue);
	}
}

int main()
{
	int ino = 5;
	Display(ino);

	return 0;
}