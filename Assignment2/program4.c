#include<stdio.h>  //innbdv

int Display(int iNo , int iFrequency )
{
    int iNo1 =0 ;
    iNo1 =1 ;
  
    for( iFrequency ; iFrequency > 0   ;iFrequency --)
    {
        printf("%d ",iNo);
    }
}

int main()
{
    int iValue =0 ;
    int iCount = 0;


    printf("Enter the number:");
    scanf("%d",&iValue);

     printf("Enter the Frequency:");
    scanf("%d",&iCount);

    Display(iValue , iCount);
    return 0 ;
}