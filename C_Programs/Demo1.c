// program to print 5 time "marvellous" on screen 

#include<stdio.h>

void Display()
{
	int i = 0;
	for(i = 1; i <= 5 ; i++)
	{
		printf("Marvellous  %d \n",i);
	}
}

int main()
{
	Display();
	return 0;
}