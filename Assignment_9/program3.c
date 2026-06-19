#include <stdio.h>

int CountRange(int iNo)
{
    int iCnt =0 ;
    int iDigit =0 ;

    while (iNo != 0 )
    {
        iDigit = iNo % 10 ;
        if((iDigit) >= 3 && iDigit <= 7)
        {
            iCnt++ ;
        }
        iNo =iNo /10 ;
    }

    return iCnt ;
    

   
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);
    printf("Total Number Between 3 to 7 Numbers in the %d is:%d",iValue,iRet);
    return 0;
}