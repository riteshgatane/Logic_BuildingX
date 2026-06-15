#include <stdio.h>

int Factorial(int iNo)
{
   int  iCnt = 0 ;
   int iMulti = 1;
   if (iNo < 0)
   {
        iNo = -iNo ;
   }
   
   for(iCnt =iNo ; iCnt >=1 ; iCnt --)
   {         
        iMulti = iMulti*iCnt ;
   }
  
    return iMulti ;
}

int main()
{
    int iValue = 0,iRet =0;

    printf("Enter The Number:");
    scanf("%d",&iValue);


    iRet = Factorial(iValue);
    printf("Factorial of number is %d",iRet);

    return 0;
}