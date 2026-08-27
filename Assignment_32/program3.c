/*
program which accept string from user
 and toggle the case. 
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void Display(char *str)
{
    int i = 0 ; 
    int len = strlen(str);

    for(i =0 ; i < len ; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = tolower(str[i]) ; 
        }
        else if(str[i] >='a' && str[i] <='z' )
        {
            str[i] = toupper(str[i]) ; 
        }
    }
}

void DisplayX(char *str)
{
    int i = 0 ; 
    int len = strlen(str) ; 

    for(i=0 ; i < len ; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z' )
        {
            str[i] = str[i] + 32 ; 
        }
        else if(str[i] >= 'a' && str[i] <= 'z' )
        {
            str[i] = str[i] - 32 ; 
        }
    }
}


int main()
{
    char arr[20] ; 

    printf("Enter String :") ; 
    scanf("%[^'\n']s", arr); 
    
    DisplayX(arr);
    printf("Modified String is %s\n",arr);

    return 0 ; 
}