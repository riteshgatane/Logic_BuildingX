#include <stdio.h>

int countCapital(char *str)
{
    int Cnt =0 ;

    if(str == NULL)
    {
        return 0 ; 
    }

    while (*str != '\0')
    {
        if(*str>= 'A' && *str <= 'Z')
        {
            Cnt++ ; 
        }
        str++ ; 
    }
    return Cnt ; 
    
}
int main()
{
    char arr[20] ; 
    int iRet = 0 ;

    printf("Enter the String : \n ") ; 
    scanf("%[^'\n']s",arr) ;


    iRet = countCapital(arr) ; 

    printf("%d",iRet) ; 

    return 0 ; 
}