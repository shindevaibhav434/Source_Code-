#include<stdio.h>

void Display()
{
	int iNo = 7545;
	int iTen = 0;

	iTen = iNo % 10;          // 5
	printf("%d \t", iTen);    // 5
	iNo = iNo / 10;           // 754

	iTen = iNo % 10;          // 4
	printf("%d \t", iTen);    // 4
	iNo = iNo / 10;           // 75

	iTen = iNo % 10;          // 5
	printf("%d \t", iTen);    // 5
	iNo = iNo / 10;           // 7

	iTen = iNo % 10;          // 7
	printf("%d \t", iTen);    // 7
	iNo = iNo / 10;           // 0

}

int main()
{
	Display();

	return 0;
}