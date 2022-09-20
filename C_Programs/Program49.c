// input : 6
// iCnt :  1   2   3   4   5  6
// outpur : a  b   c   d   e  f

#include<stdio.h>

void Display(int iValue)
{

	int iCnt = 0;
	char ch = 'a';

	for(iCnt = 1; iCnt <= iValue ; iCnt++)
	{
		printf("%c \n",ch);
		ch++;
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