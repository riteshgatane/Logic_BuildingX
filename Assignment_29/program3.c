#include <stdio.h>

#define TRUE 1 
#define FALSE 0 

typedef int BOOL ; 

BOOL chkDigit(int no )
{  
    if((no >= 0  && no <= 9))
    {
        return TRUE ; 
    }
    else
    {
        return FALSE ; 
    }
}

int main()
{
    char iValue = '\0' ; 
    BOOL bRet = FALSE ; 

    printf("Enter the Number : ");
    scanf("%d",&iValue) ;

    bRet = chkDigit(iValue) ;

    if(bRet == TRUE)
    {
        printf("It is a Number") ; 
    }
    else
    {
        printf("It is Not a Number ");
    }

    return 0 ; 
}