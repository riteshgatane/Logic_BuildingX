/*
program which accept string from user and accept one 
character. Return index of last occurrence of that character.
*/

#include<stdio.h>
#include<string.h>

int ChkChar(char *str ,char ch )
{
    int index =0 ;
    int i = 0 ; 
    int len = strlen(str);
    
    for(i= 0  ; i < len ; i++ )
    {
         if(str[i] == ch)
         {
            index = (i+1); 
         } 
    }
    return index ; 
}

int main()
{
    char arr[20] ; 
    char cValue ; 
    int iRet =0 ;

    printf("Enter the String : ") ; 
    scanf("%[^\n]s", arr) ; 

    printf("Enter the Character :  ") ; 
    scanf(" %c",&cValue) ;  

    iRet = ChkChar(arr,cValue);
    
    printf("Number of character in string is : %d", iRet) ;
    return 0  ; 
}