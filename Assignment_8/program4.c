#include <stdio.h>

double FhtoCs(float fTemp)
{
    double celsius =0.0 ;

    celsius = (fTemp - 32.0 ) * (5.0/9.0);
    return celsius ;
}


int main()
{
    float fValue =0.0 ;
    double dRet = 0.0 ;

    
    printf("Enter temperatue in Fahrenhiet:");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);
    printf("Temperature in celsius is :%lf",dRet);
  

    return 0 ;
}