#include <stdio.h>
#include <stdlib.h>

#define TRUE 1 
#define FALSE 0 

typedef  int BOOL ;
BOOL Frequency(int Arr[],int iLength)
{
    int iCnt = 0 ;
    
    for(iCnt = 0 ; iCnt <iLength ; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

}

int main()
{
    int iSize=0 ,_iRet=0,iCnt = 0,iLength=0;
    int *p = NULL ;
    BOOL bRet = FALSE ;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p =(int * )malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate Memory");
        return -1 ;
    }
    printf("Enter %d elements:",iLength);

    for(iCnt = 0 ; iCnt < iSize ;iCnt++)
    {
        printf("Enter elements  %d:",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Frequency(p , iSize);

    if(bRet == 1)
    {
        printf("Their is 11 Number");
    }
    else
    {
        printf("Thier is No 11 Number");
    }

    free(p);
    return 0 ; 
}