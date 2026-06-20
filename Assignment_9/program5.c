#include <stdio.h>

int CountDiff(int iNo)
{
    int iCnt =0 ;
    int iEsum = 0;
    int iOsum =0 ;
    int iDigit =0 ;

    while (iNo != 0 )
    {
        iDigit = iNo % 10 ;
        if((iDigit % 2 ) == 0)
        {
           iEsum = iEsum + iDigit ;
        }
         if((iDigit % 2 ) != 0)
        {
            iOsum = iOsum + iDigit ;
            
        }
        iNo =iNo /10 ;
    }

    return iEsum - iOsum ;

}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("difference OF Numbers in the %d is:%d",iValue,iRet);
    return 0;
}