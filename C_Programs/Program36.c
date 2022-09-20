#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int);
int Reverse(int);

bool CheckPallindrome(int iAccept)
{
    int iNumber = 0;
    iNumber = Reverse(iAccept);
    if(iNumber == iAccept)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int Reverse(int iCatch)
{
    int iNo = 0;
    int iRev = 0;
    while(iCatch > 0)
    {
        iNo = iCatch % 10;
        iRev = (iRev * 10) + iNo;
        iCatch = iCatch / 10;
    }
    return iRev;
}


int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    bRet = CheckPallindrome(iValue);
    if(bRet == true)
    {
        printf("Number is pallindrome ");
    }
    else 
    {
        printf("Number is not pallindrome ");
    }
    
    return 0;
}
