#include <stdio.h>

#define TRUE 1 
#define FALSE 0 

typedef int BOOL ; 

BOOL chkSmall(char ch)
{
    
    if((ch >= 'a'  && ch <= 'z'))
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
    char cValue = '\0' ; 
    BOOL bRet = FALSE ; 

    printf("Enter the Charater : ");
    scanf("%c",&cValue) ;

    bRet = chkSmall(cValue) ;

    if(bRet == TRUE)
    {
        printf("iT IS a Small Charater") ; 
    }
    else
    {
        printf("It is Not a  Small Character ");
    }

    return 0 ; 
}