#include <stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0 

typedef int BOOL ;

int Difference (int Arr[] , int ilength )
{
    int i = 0 ; 
    int iSmallest = Arr[0] ;
    int iLargest = Arr[0];
    for(i= 0; i < ilength ; i++)
    {
        if (Arr[i] < iSmallest )
        {
            iSmallest = Arr[i] ;
        }
        if(Arr[i]> iLargest)
        {
            iLargest = Arr[i] ;
        }
    }
    return (iLargest- iSmallest) ;
}

int main()
{
    int iSize = 0 , iRet = 0 ,iCnt =  0 ;
    int *p = NULL; //int p[];

    printf("Enter The Number oF Elements : ");
    scanf("%d",&iSize);

    p= (int *)malloc(iSize * sizeof(int));

    printf("Enter %d Elements\n",iSize);
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("Enter %d element :\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("Difference BetwennLargest and smallest Number is %d", iRet);

    free(p);
    return 0 ;
}