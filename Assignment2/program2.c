#include<stdio.h>

int Display(int iNo)
{
    int iNo1 =1 ;
    while(iNo >= iNo1 )
    {
        printf("*");
        iNo -- ;
    }
}

int main()
{
    int iValue =0 ;

    printf("Enter the number:");
    scanf("%d",&iValue);

    Display(iValue);
    return 0 ;
}