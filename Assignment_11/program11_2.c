#include <stdio.h>

void RangeDisplayEven(int iStart ,int iEnd)
{
    int iCnt =0;

    for(iCnt = iStart ;iCnt <=iEnd ; iCnt++ )
    {
        if((iCnt%2) == 0)
        {
            printf("%d\t",iCnt);
        }
    }

}

int main()
{
    int iValue1 =0, iValue2 =0;

    
    printf("Enter the Starting point:");
    scanf("%d",&iValue1);

    printf("Enter the Ending point:");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;

}