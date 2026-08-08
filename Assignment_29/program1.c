#include <stdio.h>

#define TRUE 1 
#define FALSE 0 

typedef int BOOL ; 

BOOL chkAlpha(char ch)
{
    
    if((ch >= 'A'  && ch <= 'Z'))
    {
        return TRUE ; 
    }

    else if (ch >= 'a'  && ch <= 'z')
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

    bRet = chkAlpha(cValue) ;

    if(bRet == TRUE)
    {
        printf("iT IS a Charater") ; 
    }
    else
    {
        printf("It is Not a Character ");
    }

    return 0 ; 
}