#include <stdio.h>

double CircleArea(float fRadius)
{
    double Area = 0;
    float PI = 3.14 ;

    Area = PI * fRadius * fRadius;
    return Area; 
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0 ; 

    printf("Enter the radius:");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of the Circle is %lf10.4",dRet);
    return 0 ;
}