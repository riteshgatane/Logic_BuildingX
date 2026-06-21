#include <stdio.h>

int RangeSum(int iStart ,int iEnd)
{
    int iCnt =0;
    int iSum =0;
    if(iStart > 0 && iEnd > 0)
    {
    for(iCnt = iStart ;iCnt <=iEnd ; iCnt++ )
    {
        if((iCnt%2) ==0 )
        {
            printf("%d\t",iCnt);
            iSum =iSum +iCnt ;
        }
    }
    }
    else 
    {
        printf("INVALID NUMBER");
    }
    return iSum ;
}

int main()
{
    int iValue1 =0, iValue2 =0;
    int iRet =0;

    
    printf("Enter the Starting point:");
    scanf("%d",&iValue1);

    printf("Enter the Ending point:");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);
    printf("The Summation is:%d",iRet);

    return 0;

}