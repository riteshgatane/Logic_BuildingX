////////////////////////////////////////////////////////////
//      Accept number from user and display 
//      all its non factors(Shows Working of the loop) 
////////////////////////////////////////////////////////////

#include <stdio.h>

int FactRev(int iNo)
{
    int iCnt= 0;
    for(iCnt=(iNo/2); iCnt >= 0  ; iCnt--)
    {
        if((iNo % iCnt) ==0)
        {
            printf("Factor of %d :%d\n",iNo,iCnt);
        }
       if((iNo % iCnt) !=0)
       {
        printf("Non Factor of %d:%d\n",iNo,iCnt);
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