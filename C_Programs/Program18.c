#include<stdio.h>

int Display(int);

int main()
{
    int iValue= 0, iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Display(iValue);
    printf("Addition is : %d",iRet);

    return 0;
}

int Display(int iNo)
{
    int i = 0;
    int iSum = 0;
    while(iNo > 0)
    {
        i = iNo % 10;
        iSum = iSum + i;
        iNo = iNo / 10;
    }
    return iSum;
}