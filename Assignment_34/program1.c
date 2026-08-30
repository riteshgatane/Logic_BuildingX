/*
program which accept string from user and copy the 
contents of that string into another string. (Implement strcpy() 
function)
*/

#include<stdio.h>

void StrcpyX(char *src , char *dest)
{
        while (*src != '\0')
        {
            *dest = *src ; 
            src++  ; 
            dest++ ; 
        }
        *dest = '\0' ; 
}


int main()
{
    char arr[30] = "Marvellous Multi OS" ; 
    char brr[30] ; 

    StrcpyX(arr , brr) ; 

    printf("%s\n" , brr) ; 

    return 0 ; 
}