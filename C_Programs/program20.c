#include<stdio.h>

int Display(int);

int main()
{
    int iValue= 0, iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Display(iValue);
    printf("Number of Digits are : %d",iRet);

    return 0;
}

int Display(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    if(iNo == 0)
    {
        return 1;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iCnt++;
        iNo = iNo / 10;
    }
    return iCnt;
}