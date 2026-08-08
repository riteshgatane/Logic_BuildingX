/*Input :  iRow = 4  iCol =  4  
  Output : 1    2   3   4   5
           1    2           5
           1        3   4   5
           1    2   3   4   5
*/
#include <stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0 ; 
    int j = 0  ;
    int iCount = 0 ;


    for(i =1 ; i <= iRow ; i++)
    {
        for(j=1 ; j <= iCol ;j++)
        {
            if(j ==1 || j == iCol)
            {
                printf("%d\t",j);
            }
            else if (i== 1 || i== iRow)
            {
                printf("%d\t",j);
            }
            else if( i == j )
            {
                printf("%d\t",j);
            }
            else 
            {
                printf("\t");
            }
        }
        printf("\n");
    }

}
int main()
{
    int iValue1 = 0 ;
    int iValue2 =0  ;

    printf("Enter the Number of Rows :");
    scanf("%d",&iValue1);

    printf("Enter the Number of Columns :");
    scanf("%d",&iValue2);

    Pattern(iValue1 , iValue2);

    return 0 ; 
}