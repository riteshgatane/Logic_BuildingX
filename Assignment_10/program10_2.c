////////////////////////////////////////
//Accept width & height of rectangle from user 
//and calculate its area
////////////////////////////////////////


#include <stdio.h>

double RectArea(float fWidth ,float fHeight)
{
    double Area = 0;
    Area = fWidth * fHeight ;
    return Area ;
  
}
int main()
{
    float fValue1 = 0.0f ;
    float fValue2 =0.0f ;
    double dRet = 0 ;

    printf("Enter the Width: ");
    scanf("%f",&fValue1);

    printf("Enter the Height: ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1 ,fValue2);

    printf("Area of Rectangle is:%lf",dRet);
    return 0;
}