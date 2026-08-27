/*
    Converting String to Capital Letters 
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void strlwrx(char *str)
{
    int i = 0 ; 
    int len = strlen(str);

    for(i =0 ; i < len ; i++)
    {
       str[i] = toupper(str[i]) ; 
    }
}



int main()
{
    char arr[20] ; 

    printf("Enter String :") ; 
    scanf("%[^'\n']s", arr); 

    strlwrx(arr);

    printf("Modified String is %s",arr); 

    return 0 ; 
}