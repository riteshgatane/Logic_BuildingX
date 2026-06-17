///////////////////////////////
//Area of Rectangle 
///////////////////////////////
#include <stdio.h>

float RectArea(float fWidth , float fHeight)
{
 
    float fArea = 0; 
    fArea = fWidth * fHeight ; 

    
    return fArea; 
}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 =0.0f;
    double dRet = 0.0 ; 

    printf("Enter width :");
    scanf("%f",&fValue1);

    printf("Enter Height:");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of the Rectangle is %lf",dRet);
    return 0 ;
}