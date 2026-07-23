/*
Input : iRow = 4 iCol = 4
Output :    2 4 6 8 10
            1 3 5 7 9
            2 4 6 8 10
            1 3 5 7 9
 */


 #include <stdio.h>

 void Pattern(int iRow , int iCol )
 {
    int i  = 0 ;
    int j = 0 ;
    int ENo = 0 ;
    int iCount = 0 ;
    int ONo = 1 ;

    for(i = 1 ; i<=iRow ; i++)
    {
        printf("\n");
        for(j=1 ; j<=iCol ; j++)
        {
            if(i%2 != 0)
            {
                ENo = ENo+2 ; 
                printf("%d\t",ENo);

                if(ENo == 10)
                {
                    ENo = 0;
                }

            }   
            else
            {
                if(ONo == 9)
                {
                    printf("%d\t",ONo);
                    ONo = 1 ;
                }
                else
                {
                    printf("%d\t",ONo);
                    ONo = ONo+2 ; 
                }
            }
        }
    }

 }

 int main()
 {
    int iValue1 =0 , iValue2 = 0 ;

    printf("Enter the Rows :");
    scanf("%d",&iValue1) ; 

    printf("Enter the Column :");
    scanf("%d",&iValue2) ; 

    Pattern(iValue1 , iValue2) ;



    return 0 ; 
 }