////////////////////////////////////////////
//     Accept number from user and display its
//     multiplication of factors. 
///////////////////////////////////////////

#include <stdio.h>

int FactRev(int iNo)
{
    int iCnt= 0;
    for(iCnt=(iNo/2); iCnt >= 0  ; iCnt--)
    {
        if((iNo % iCnt) ==0)
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

    printf("%d",iRet);

    return 0 ;
}