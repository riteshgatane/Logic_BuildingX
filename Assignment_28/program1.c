/*Input :  iRow = 4   iCol = 4 
Output :    *   *   *   # 
            *   *   #   *
            *   #   *   *
            #   *   *   *

*/

#include <stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0 ;
    int j= 0 ;
    int iNew = 0 ;

    iNew = iCol ; 

    for(i=1 ; i <= iRow ; i++)
    {
        for(j=1 ; j<=iCol ; j++)
        {
            if(j == iNew)
            {
                printf("#\t");
                iNew-- ;

            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0 , iValue2 =0  ;

    printf("Enter the Rows :");
    scanf("%d",&iValue1);

    printf("Enter the Columns :");
    scanf("%d",&iValue2);

    Pattern(iValue1 , iValue2);

    return 0 ; 
}