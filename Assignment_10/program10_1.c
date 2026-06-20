////////////////////////////////////////
//Calculating the Area of the Circle
////////////////////////////////////////


#include <stdio.h>

double CircleArea(float fRadius)
{
    float PI=0;
    PI =3.14 ;
    if(fRadius < 0)
    {
        fRadius = -fRadius ;
    }
    return PI*fRadius*fRadius ;
}
int main()
{
    float fValue = 0 ;
    double dRet = 0 ;

    printf("Enter the Value: ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is:%lf",dRet);
    return 0;
}