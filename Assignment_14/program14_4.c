#include <stdio.h>
#include<stdlib.h>


int FrequencyofEleven(int Arr[],int iLength)
{
    int iCnt = 0 ;
    int iCount =0;
    
    for(iCnt = 0 ; iCnt <iLength ; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount++;
        }
    }
    return iCount ;

}

int main()
{
    int iSize=0 ,_iRet=0,iCnt = 0,iLength=0;
    int *p = NULL ;
    int iRet = 0 ;

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

    iRet = FrequencyofEleven(p , iSize);
    printf("Frequency of 11 is %d",iRet);

    

    free(p);
    return 0 ; 
}