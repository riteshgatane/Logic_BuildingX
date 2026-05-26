////////////////////////////////////////////////////////////
//      Accept number from user and display 
//      all its non factors 
////////////////////////////////////////////////////////////

#include <stdio.h>

int FactRev(int iNo)
{
    int iCnt= 0;
    for(iCnt=1 ; iCnt < iNo  ; iCnt++ )
    {
       if((iNo % iCnt) !=0)
       {
        printf("%d\t",iCnt);
       }

    }
}
int main()
{
    int iValue = 0 ;
    int iRet = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    iRet = FactRev(iValue);


    return 0 ;
}