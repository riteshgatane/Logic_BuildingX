#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0


    int Minimum(int Arr[] , int iLength)
    {
        int iCnt ; 
        int iSmallest =Arr[0]  ;

        for(iCnt = 0 ; iCnt < iLength ; iCnt++)
        {
            if(Arr[iCnt] < iSmallest )
            {
                iSmallest = Arr[iCnt]  ;
            }
        }
        return iSmallest ;
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


    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("Enter the %d Element:",iCnt + 1);
        scanf("%d", &p[iCnt]);
    }
    
    iRet = Minimum( p , iSize);

    printf("The Smaleest number is %d",iRet);
    
    free(p) ;
    return 0 ;
}