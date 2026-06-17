#include <stdio.h>

int  Factorialdiff(int iNo )
{
    int iCnt = 0 ;
    int iEMulti =1;
    int iOMulti =1 ;

    if(iNo < 0 )
    {
        iNo = -iNo ;
    }
    for(iCnt =1 ;iCnt <= iNo ; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEMulti = iEMulti * iCnt; 
            
        }
        if((iCnt % 2) != 0)
        {
            iOMulti = iOMulti * iCnt; 
            
        }

        

    }
    return ( iEMulti - iOMulti) ;
    
    
}

int main()
{
    int iValue =0; 
    int iRet = 0;
    printf("Enter the Number :");
    scanf("%d",&iValue);

    iRet = Factorialdiff(iValue);

    printf("Difference of  Factorial  is %d",iRet);
    return 0 ;
}