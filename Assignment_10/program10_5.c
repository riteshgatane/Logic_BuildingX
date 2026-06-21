#include <stdio.h>
double SquareMeter(int iValue)
{
    double iConvert =0;
    iConvert = iValue * 0.0929;

    return iConvert;
}
int main()
{
    int iValue = 0;
    double dRet =0;

    printf("Enter area in Square feet:");
    scanf("%d",&iValue);

    dRet =  SquareMeter(iValue);
    printf("Square Meter is:%lf",dRet);

    return 0;
}
