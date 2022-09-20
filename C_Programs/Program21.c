#include<stdio.h>

void Display(int);

int main()
{
    int iValue= 0, iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);
    //printf("Even Number are : %d",iRet);

    return 0;
}

void Display(int iNo)
{
    int iDigit = 0;
    //int iCnt = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            printf("%d \n",iDigit);
        } 
        iNo = iNo / 10;
    }
}