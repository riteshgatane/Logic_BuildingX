/* Write a program which accept string from user and check whether 
it contains vowels in it or not.
Input :   “xyz”
Output :  FALSE

*/

#include <stdio.h>
#include <stdbool.h>

bool ChkVowel(char *str)
{
    if (str == NULL)
    {
        return false ; 
    }
    
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e'||*str == 'i'||*str == 'o'||*str == 'u'||
            *str == 'A' || *str == 'E'||*str == 'I'||*str == 'O'||*str == 'U')
            {
                return true  ; 
            }
        str ++ ;
    }

}

int main()
{
    char arr[20] ; 

    bool bRet = true ;

    printf("Enter String ") ; 
    scanf("%[^\n]s",arr) ; 

    bRet = ChkVowel(arr) ; 

    if(bRet == true)
    {
        printf("Contians Vowel") ; 
    }
    else
    {
        printf("Thier is no Vowel") ; 
    }
    return 0 ; 
}