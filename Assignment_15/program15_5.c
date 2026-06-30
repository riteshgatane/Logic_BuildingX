#include <stdio.h>
#include <stdlib.h>
//Summation only Positive Numbers
    int DigitSum(int Arr[] , int iLength)
    {
        int iCnt ; 
        int iSum = 0 ;
        
        for(iCnt = 0 ; iCnt < iLength ; iCnt++)
        {
            if(Arr[iCnt] > 0)
            {
                iSum = iSum + Arr[iCnt] ;
            }
            
        }

        return iSum ;

    }


int main()
{
    int iSize = 0 ,iRet = 0 , iCnt = 0 ,iValue = 0 ;
    int *p = 0 ;

    printf("Enter Number of Elements:");
    scanf("%d",&iSize);

        //typeCast
    p = (int *)malloc(iSize * sizeof(int)) ;

    if(p== NULL)
    {
        printf("Unable to allocate the Memory");
        return 1 ;
    }


    for(iCnt = 0 ; iCnt <  iSize ; iCnt++)
    {
        printf("Enter the %d Element:",iCnt + 1);
        scanf("%d", &p[iCnt]);
    }
    
    iRet = DigitSum( p , iSize);

    printf("The Summation of all number is %d",iRet);
    
    free(p) ;
    return 0 ;
}