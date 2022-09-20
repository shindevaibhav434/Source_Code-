// Header file inclusion

#include<stdio.h>
void Display();

int main()
{
	Display();
}

void Display()
{
	int iNo = 0;
	int iDigit = 7521;

	while(iDigit > 0)
	{
		iNo = iDigit % 10;
		printf("%d",iNo );
		iDigit = iDigit / 10;
	}

}