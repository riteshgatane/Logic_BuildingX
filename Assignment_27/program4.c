/*
Input: iRow = 4     iCOl =4

output:    *    *   *   *   *
           *    *           *
           *        *       *
           *            *   *
           *    *   *   *   *   
*/


#include <stdio.h>

void Pattern(int iRow ,int iCol)
{
    int i = 0 ; 
    int j = 0 ; 

    if(iRow != iCol)
    {
        printf("Invalid paprameters");
        return ; 
    }

    for(i=1 ; i <= iRow ; i++)
    {
        for(j=1 ;j <=iCol ; j++)
        {
            if(i == j)
            {
                printf("*\t");
            }
            else if (i ==1 || j == 1 || i ==iRow || j ==iCol)
            {
                printf("*\t");
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