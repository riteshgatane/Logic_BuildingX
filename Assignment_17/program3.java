import java.util.Scanner ; 

class Logic
{
    int findMax(int No1 , int No2)
    {
        if(No1 > No2)
        {
            return No1 ; 
        }
        else
        {
            return No2 ;
        }
        
    }
}

class program3
{
    public static void main(String A[]) 
    {
        int iValue1 = 0 , iValue2 = 0  ; 
        int iRet = 0 ;
        Scanner sobj = new Scanner(System.in); 
        
        System.out.println("Enter the First Number :");
        iValue1 = sobj.nextInt() ; 

        System.out.println("Enter the First Number :");
        iValue2 = sobj.nextInt() ; 

        Logic lobj = new Logic();
        iRet =lobj.findMax(iValue1 , iValue2); 

        System.out.printf("From %d and %d the maximum Number is %d",iValue1 ,iValue2 , iRet);
        sobj.close();
    }
}