///////////////////////////////
// Kilometre to meter
///////////////////////////////
#include <stdio.h>

int  KMtoMeter(int iNo)
{
    int iTMeter =0;
    if(iNo > 0 )
    {
    
    iTMeter = iNo * 1000 ; 
    

    }
        return iTMeter ; 
}

int main()
{
    int  fValue1 = 0;
    int  iRet =0;
   
    printf("Enter distance in KM:");
    scanf("%d",&fValue1);


    iRet = KMtoMeter(fValue1);
    printf("Distance in kilometre to meter is %d",iRet);
    return 0 ;
}