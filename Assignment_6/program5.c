#include <stdio.h>

int Table(int iNo)
{
   int  iCnt = 0 ;
   int  iMulti = 1;

   if (iNo < 0)
   {
        iNo = -iNo ;
   }
   
   for(iCnt =10 ; iCnt >=1 ; iCnt --)
   {         
        iMulti = iNo*iCnt ;
        printf("%d\t",iMulti);
   }
     return iNo ;
}

int main()
{
    int iValue = 0;

    printf("Enter The Number:");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}