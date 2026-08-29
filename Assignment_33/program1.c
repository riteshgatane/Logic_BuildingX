/*
 program which accept string from user and accept one 
character. Check whether that character is present in string or not.
*/

#include<stdio.h>
#include<string.h>

#define TRUE 1
#define FALSE 0 

typedef int BOOL ; 

BOOL ChkChar(char *str ,char ch )
{
    int i = 0 ; 
    int len = strlen(str);
    
    for(i= 0  ; i < len ; i++ )
    {
         if(str[i] == ch)
         {
            return TRUE ; 
         }
         
    }
    return FALSE ; 

}

int main()
{
    char arr[20] ; 
    char cValue ; 
    BOOL bRet = FALSE ; 

    printf("Enter the String : ") ; 
    scanf("%[^\n]s", arr) ; 

    printf("Enter the Character :  ") ; 
    scanf(" %c",&cValue) ;  

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character Found") ;
    }
    else
    {
        printf("Character NOt Found") ; 
    }

    return 0  ; 
}