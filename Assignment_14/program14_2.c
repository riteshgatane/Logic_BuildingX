#include<stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt =0 ;
    int iEven =0,iODd =0 ;
    for(iCnt = 0 ;iCnt < iLength ; iCnt++)
    {
        if((Arr[iCnt]%2 ) == 0 )
        {
            iEven++ ;
        }
        else
        {
            iODd++ ;
        }
    }
    return( iEven-iODd) ;
}

int main()
{
    int iSize = 0, iRet =0, iCnt =0;
    int iLength =0 ;
    int *p = NULL ;

    printf("Enter Number of elements:");
    scanf("%d",&iSize);

    p = (int *) malloc (iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate Memory");
        return -1 ;
    }

    printf("Enter the elements");


    for(iCnt = 0 ; iCnt < iSize ;iCnt++)
    {
        printf("Enter elements  %d:",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p , iSize);

    printf("difference of Frequency of Even Number and odd Numbers is %d",iRet);

    free(p);
    return 0;
}