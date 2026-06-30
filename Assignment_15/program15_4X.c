#include <stdio.h>
#include <stdlib.h>
//Return Only All ThreeDigit Number
    int Digits(int Arr[] , int iLength , int Brr[])
    {
        int iCnt ; 
        int iCount = 0 ;

        for(iCnt = 0 ; iCnt < iLength ; iCnt++)
        {
            if(Arr[iCnt] >= 100 && Arr[iCnt]  <= 999)
            {
                Brr[iCount] = Arr[iCnt] ;
                iCount++ ;
            }
        }
        return iCount ;  //tells how many three Digit Number   
    }


int main()
{
    int iSize = 0 ,iRet = 0 , iCnt = 0 ,iValue = 0 ;
    int *p = 0 ;  // Array 1 
    int *q = 0 ;  //Array 2

    printf("Enter Number of Elements:");
    scanf("%d",&iSize);

        //typeCast
    p = (int *)malloc(iSize * sizeof(int)) ;
    q = (int *)malloc(iSize * sizeof(int)) ;  //Empty

    if(p== NULL)
    {
        printf("Unable to allocate the Memory");
        return 1 ;
    }


    for(iCnt = 0 ; iCnt <  iSize ; iCnt++)  //Filling in the p Array 
    {
        printf("Enter the %d Element:",iCnt + 1);
        scanf("%d", &p[iCnt]);
    }
    
    iRet = Digits( p , iSize , q );

    printf("The Three Digit number is ");
    for(iCnt = 0; iCnt < iRet ; iCnt++)
    {
        printf("%d ", q[iCnt]);
    }

    
    free(p) ;
    return 0 ;
}