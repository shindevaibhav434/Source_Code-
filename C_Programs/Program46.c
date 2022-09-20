#include<stdio.h>

void Display()
{
	int iNo1 = 22, iNo2 = 46, iNo3 = 62;
	float fResult = 0; 

	fResult = (iNo1 + iNo2 + iNo3) / 3;
	printf("everage is %f \n",fResult);

}

int main()
{
	Display();
	return 0;
}