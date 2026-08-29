/*
program which accept string from user and count number of 
white spaces
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int  CountWhite(char *str)
{
    int i = 0 ; 
    int len = strlen(str);
    int iCnt = 0 ; 

    for (i = 0 ; i < len ; i++)
    {
        if(str[i] == ' ')
        {
            iCnt ++; 
        }
    }
    return iCnt ; 
}

int main()
{
    char arr[20] ; 
    int iRet =0   ;

    printf("Enter String :") ; 
    scanf("%[^'\n']s", arr); 
    
    iRet = CountWhite(arr);
    printf("Number of White Spaces in the String : %d",iRet);

    return 0 ; 
}