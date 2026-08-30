/*
program which accept string from user reverse that string 
in place.
*/

#include<stdio.h>
#include<string.h>

void StrRevX(char *str)
{
    int index =0 ;
    int istart = 0 ; 
    int iend = strlen(str) - 1 ;
    char temp = 0; 

    while (istart < iend)
    {
        temp = str[istart] ; 
        str[istart] = str[iend] ; 
        str[iend] = temp ; 

        istart++ ; 
        iend-- ; 
    }
    

}

int main()
{
    char arr[20] ; 
    char cValue ; 
    int iRet =0 ;

    printf("Enter the String : ") ; 
    scanf("%[^\n]s", arr) ; 

    StrRevX(arr);
    printf("Modified String is : %s", arr) ; 
    return 0  ; 
}