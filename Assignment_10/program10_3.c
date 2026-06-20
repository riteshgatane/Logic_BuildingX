#include <stdio.h>

int KMtoMeter(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo ;
    }
    int iFinal =0;
    iFinal = iNo *1000;
    return iFinal;
}

int main()
{
    int iValue =0 ,iRet =0;

    printf("Enter Distance:");
    scanf("%d",&iValue);

    iRet =KMtoMeter(iValue);

    printf("KM to Meter Value is:%d Meter",iRet);
    return 0 ;

}