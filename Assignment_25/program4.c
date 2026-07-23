/*
Input : iRow = 5 iCol = 5
Output : 1 2 3 4 5
        -1 -2 -3 -4 -5
        1 2 3 4 5
        -1 -2 -3 -4 -5
        1 2 3 4 5
*/



#include <stdio.h>

void Pattern(int iRow , int iCol)
{
    int i =0 ;
    int j = 0 ;
    int iCount = 0 ;  

    for(i=1 ; i <= iRow ;i++)
    {
        for(j=1  ;  j <= iCol ; j++ )
        {
            if(i%2 == 0)
            {
                if(iCount == 5)
                {
                    iCount = 0 ; 
                }
                
                iCount-- ; 
                printf("%d\t",iCount) ; 
                  
            }
            else
            { 
                if(iCount == -5)
                {
                        iCount = 0 ; 
                }
                iCount++ ; 
                printf("%d\t",iCount); 
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