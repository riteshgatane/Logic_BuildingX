#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL ;

void  DisplayDigit(int iNo)
{

}

int main()
{
    int iSize =0 ,iRet = 0 ,iValue =0 ;
    int *p = NULL ;
    BOOL bRet =FALSE ;
    int iCnt = 0;
    int iLength =0 ;

    printf("Enter the Number of Elements");
    scanf("%d",&iSize);

    printf("Enter the Number");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate length ");
        return -1 ;
    }

    for(iCnt =0; iCnt < iLength ; iCnt ++)
    {
      printf("Enter elements : %d",iCnt+1);
      scanf("%d",&p[iCnt]);
    }

    bRet =  


    return 0;
}