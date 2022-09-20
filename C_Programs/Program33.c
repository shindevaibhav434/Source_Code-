#include<stdio.h>

int Reverse(int iDigit)
{
    int iNo = 0;
    int iRev = 0;
    while(iDigit != 0)
    {
        iNo = iDigit % 10;
        iRev = (iRev * 10) + iNo;
        iDigit = iDigit / 10;
    }
    return iRev;
}

int main()
{
    int iValue = 0,iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = Reverse(iValue);
    
    printf("Reverse number is : %d\n",iRet);
    return 0;
}