////////////////////////////////////////////////////////
//Dispaly all the number Starting point to the Ending point 
//
///////////////////////////////////////////////////////


#include <stdio.h>
void RangeDisplay(int iStart ,int iEnd)
{
    int iCnt =0;

    for(iCnt = iStart ; iCnt <= iEnd ; iCnt ++)
    {
        printf("%d\t",iCnt);
    }
    

}

int main()
{
    int iValue1= 0 ,iValue2 =0;

    printf("Enter the Starting point:");
    scanf("%d",&iValue1);

    printf("Enter the Ending point:");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);


    return 0;
}