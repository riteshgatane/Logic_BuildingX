/*
program which accept string from user and display only 
digits from that string. 
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void DisplayDigit(char *str)
{
    int i = 0 ; 
    int len = strlen(str);
    char Arr[] = "\0"; 

    for(i =0 ; i < len ; i++)
    {
        if(str[i] >= '1' && str[i] <= '9')
        {
            printf("%c", str[i]) ;  
        }
        else if(str[i] >='a' && str[i] <='z' )
        {
            str[i] = (str[i]) ; 
        }
    }
}

int main()
{
    char arr[20] ; 

    printf("Enter String :") ; 
    scanf("%[^'\n']s", arr); 
    
    DisplayDigit (arr);

    return 0 ; 
}