#include <stdio.h>
double FhtoCs(float fTemp)
{
    double iConvert =0.0;
    iConvert = (fTemp - 32.0)*(5.0/9.0);

    return iConvert ;

}
int main()
{
    float fValue = 0.0f ;
    double dRet =0;

    printf("Enter Temperature in Farenheit:");
    scanf("%f",&fValue);

    dRet =  FhtoCs(fValue);
    printf("Temperature in Celsius:%lf",dRet);

    return 0;
}
