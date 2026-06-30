#include <stdio.h>
#include <stdlib.h>
//Return Only one ThreeDigit Number
    int Digits(int Arr[] , int iLength)
    {
        int iCnt ; 
        

        for(iCnt = 0 ; iCnt < iLength ; iCnt++)
        {
            if(Arr[iCnt] >= 100 && Arr[iCnt]  <= 999)
            {
                return Arr[iCnt]  ;
            }
            
        }
        
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
    
    iRet = Digits( p , iSize);

    printf("The Three Digit number is %d",iRet);
    
    free(p) ;
    return 0 ;
}