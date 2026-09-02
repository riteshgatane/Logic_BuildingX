/*
program which accepts 2 strings from user and concat second string 
after first string. (Implement strcat() function). 
*/
#include <stdio.h>

 void StrCatX(char *src , char *dest)
 {
    while (*src != '\0')
    {
            *src++ ; 
    }

    *src = ' '; 
    *src ++ ; 
    while (*dest != '\0')
    {
        if(*src == '\0')
        {
            *src = *dest ;
        }
        *dest++  ;
        *src++ ; 
    }

    *dest = '\0' ; 
    
 }

int main()
{
    char arr[50] = "Hello" ;
    char brr[50] = "World";

    StrCatX(arr , brr) ; 

    printf("%s",arr) ; 

    return 0  ; 
}