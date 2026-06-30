#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0 

typedef int BOOL ;





int  main()

 {
    int iSize =0 , iRet=0 , iCnt = 0 , iValue = 0 ;
    int *p = NULL ;
    BOOL bRet = FALSE ;
    
    printf("Enter the Number of elements:");
    scanf("%d",&iSize);

    printf("Enter the Number:");
    scanf("%d",&iValue);

    p = (int *)malloc (iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Memmory is Not allocated");
        return -1 ;
    }

    printf("Enter %d elements",iSize);

    for(iCnt = 0 ; iCnt <iSize ; iCnt++)
    {
        printf("Enter Element:%d",iCnt);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize,iValue);

    if(bRet == TRUE)
    {
        printf("nUMBER IS PRESENT");
    }

    else{
        printf("Number is Not present");
    }

    free(p);


    return 0; 
}