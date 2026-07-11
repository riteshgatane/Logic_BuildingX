import java.util.Scanner ; 

class Logic
{
    int findMin(int a , int b , int c)
    {
        int iSmallest = 0 ;
        if(a < b && a < c)
        {
            iSmallest = a ;
            
        }
        else if(b < a && b < c)
        {
            iSmallest = b ;   
        }
        else
        {
            iSmallest = c;
        }
        return iSmallest ;
    }
    
}

class program4
{
    public static void main(String A[]) 
    {
        int iValue1 = 0 , iValue2 = 0,iValue3 = 0   ; 
        int iRet = 0 ;
        Scanner sobj = new Scanner(System.in); 
        
        System.out.println("Enter the First Number :");
        iValue1 = sobj.nextInt() ; 

        System.out.println("Enter the Second Number :");
        iValue2 = sobj.nextInt() ; 

        System.out.println("Enter the Third Number :");
        iValue3 = sobj.nextInt() ; 

        Logic lobj = new Logic();
        iRet =lobj.findMin(iValue1 , iValue2 ,iValue3); 

        System.out.printf("From %d , %d , %d the Minimum Number is %d",iValue1 ,iValue2 ,iValue3,iRet);
        sobj.close();
    }
}