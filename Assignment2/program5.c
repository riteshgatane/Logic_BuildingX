#include<stdio.h>

#define TRUE 1  
#define FALSE 0
typedef int BOOL ;


BOOL ChkEven(int No)
{
    if (No / 2 != 0)
    {
        printf("%d is Even ",No);
    }

    else 
    {
         printf("%d is ODd ",No);

    }
}

int main()
{
    int iValue =0 ;
    BOOL bRet = FALSE ;

    printf("Enter the number:");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);
    
    return 0 ;
}