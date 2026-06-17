#include <stdio.h>

int  DollarToINR(int iNo )
{
    int iTotal= 1;
    if(iNo >=1)
    {
        iTotal = iNo * 70 ;
        //printf("%d",iTotal );
    }
    else
    {
        printf("Invalid Number");
    }
    
    
}

int main()
{
    int iValue =0; 
    int iRet = 0;
    printf("Enter the Number :");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);
    return 0 ;
}