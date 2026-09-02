/*
program which accept string from user and copy the 
contents of that string into another string. (Implement strncpy() 
function) 
*/

#include<stdio.h>

void StrNcpyX(char *src , char *dest, int iCnt)
{
        while (*src != '\0' && iCnt != 0 )
        {
            *dest = *src ; 
            src++  ; 
            dest++ ; 
            iCnt --  ; 
        }
        *dest = '\0' ; 
}


int main()
{
    char arr[30] ; 
    char brr[30] ; 
    int iLimit = 0  ;

    printf("Enter the String : "); 
    scanf("%s" , &arr); 

    printf("Enter the Number of Character to display from the string  :") ;
    scanf("%d",&iLimit);

    StrNcpyX(arr , brr , iLimit) ; 

    printf("%s\n" , brr) ; 

    return 0 ; 
}