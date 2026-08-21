// Write a program which accept string from user and count number of small characters. 
// Input :   “Hello World” 
// Output :  6
# include <stdio.h>

int Count(char *str)

{
    int iCnts = 0 ; 
    int iCntc = 0 ; 
        
        if(str == NULL)
        {
            return 0 ; 
        }

        while(*str != '\0')
        {
            if(*str >= 'a' &&  *str <= 'z')  //CountSmall
            {
                iCnts++ ; 
            }
            str++ ; 

        }

        while (*str != '\0')
        {
            if(*str >= 'A' && *str <= 'Z')
            {
                iCntc ++ ; 
            }
        }

    return iCnts-iCntc ; 
}

int main()
{
    char arr[20]; 
    int iRet = 0 ;

    printf("Enter the String : "); 
    scanf("%[^\n]s",arr) ; 

    iRet = Count(arr) ; 
    printf("Frequency of difference of capital letter and samall letters is : %d",iRet) ; 

    return  0 ; 
}