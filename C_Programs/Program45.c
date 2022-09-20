#include<stdio.h>

void Display()
{
	int iNo1 = 20, iNo2 = 43, iNo3 = 62;
	float fResult = 0; 
	int iSum = 0;

	iSum = iNo1 + iNo2 + iNo3;
	fResult = iSum / 3;
	printf("Addtion is %d \n",iSum);
	printf("everage is %f \n",fResult);

}

int main()
{
	Display();
	return 0;
}