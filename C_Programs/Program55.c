#include<stdio.h>

void Display()
{
	int iRow = 10;
	int iCol = 5;

	int i = 0;
	int j = 0;
	for(i = 1 ; i <= iRow;i++)
	{
		for(j = 1; j <= iCol; j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
}

int main()
{
	Display();

	return 0;
}