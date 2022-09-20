/*
    iRow = 4
    iCol = 4
 
    #   #   #   #      1   2   3   4   -- > 1 
    *   *   *   *      1   2   3   4   ---> 2
    #   #   #   #      1   2   3   4   ---> 3
    *   *   *   *      1   2   3   4   ---> 4
    
 */

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i = 0;
    int j = 0;

    for(i =1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i % 2) == 0)   // Even
            {
                printf("*\t");
            }
            else 
            {
                printf("#\t");    // odd
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter number of rows\n");
    scanf("%d",&iValue1);
    
    printf("Enter number of columns\n");
    scanf("%d",&iValue2);
    
    Display(iValue1, iValue2);//Display(3,3);
    
    return 0;
}
