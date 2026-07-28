/*
Input :     iRow = 4  iCol = 4 
Output :    1   2   3   4   
            1   *   *   4  
            1   *   *   4   
            1   2   3   4   
           
*/


#include <stdio.h>

void Pattern(int iRow , int iCol)
{
    int i =0 ;
    int j = 0 ;

    int iCount = 0 ; 

    if( iRow != iCol)
    {
        printf("Invalid Parameters\n");
        return ;
    }

    for(i=1 ; i <= iRow ;i++)
    {
        
        for(j=1  ;  j <= iCol ; j++ )
        {
            
            if(iCount == iCol)
            {
                iCount = 0 ;
            }
            iCount++ ;
            if(i == iRow || j == iCol || i ==1 || j==1)
            { 
                printf("%d\t",iCount);
            }

            else
            {
                printf("@\t");
            }
     
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0 , iValue2 = 0 ;

    printf("Enter the Number of Rows: ");
    scanf("%d",&iValue1);

    printf("Enter the Number of Columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1 ,iValue2);


    return 0 ;
}