/*
Input: iRow = 4     iCOl =4

output:    1   2   3   4
               2   3   4
                   3   4
                       4
*/


#include <stdio.h>

void Pattern(int iRow ,int iCol)
{
    int i = 0 ; 
    int j = 0 ;
    int iCount = 0 ;

    if(iRow != iCol)
    {
        printf("Invalid paprameters");
        return ; 
    }

    for(i=1 ; i <= iRow ; i++)
    {
        for(j=1 ;j <=iCol ; j++)
        {
            iCount++;  
            if(i==j)
            {
                printf("%d\t",iCount) ;
            }

            else if(i == 1 || j==iCol || i<j)
            {
                printf("%d\t",iCount);

                if(iCount == iCol)
                {
                    iCount = 0 ; 
                }
            } 
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 =0  , iValue2 = 0 ;

    printf("Enter number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of Columns :");
    scanf("%d",&iValue2);

    Pattern(iValue1 , iValue2);

    return 0 ; 
}