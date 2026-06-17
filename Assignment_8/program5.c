#include <stdio.h>

double SquareMeter(int iValue)
{
    double SquareMeter = 0.0 ; 
    SquareMeter = iValue * 0.0929 ;

    return SquareMeter ;

}

int main()
{
    int iValue = 0;
    double dRet = 0;

    printf("Enter are in Square feet:");
    scanf("%d",&iValue); 
    
    dRet = SquareMeter(iValue);
    printf("Value in Square MEter : %lf",dRet);
    return 0 ;
}