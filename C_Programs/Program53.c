#include<stdio.h>

void Display()
{
    int iRow = 3;
    int iCol = 4;
    
    int i = 0, j = 0;
    
    for(i = 1; i<= iRow; i++)
    {
        printf("*\t");
    }
}

int main()
{
    Display();
    
    return 0;
}
