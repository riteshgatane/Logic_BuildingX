#include <stdio.h>

int  OddFactorial(int iNo )
{
    int iCnt = 0 ;
    int iMulti =1;

    if(iNo < 0 )
    {
        iNo = -iNo ;
    }
    for(iCnt =1 ;iCnt <= iNo ; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iMulti = iMulti * iCnt; 
            
        }
        

    }
    return iMulti ;
    
    
}

int main()
{
    int iValue =0; 
    int iRet = 0;
    printf("Enter the Number :");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("ODD Factorial of number is %d",iRet);
    return 0 ;
}