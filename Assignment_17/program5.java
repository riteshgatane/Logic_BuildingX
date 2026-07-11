import java.util.Scanner ; 

class Logic
{
    void  Table(int iNo)
    {
        int i = 0 ;
        int iMult = 0 ; 
        
        for(i = 1 ; i < 11 ; i++)
        {
            iMult = iNo * i ;
            System.out.println(+iMult);
        }
        
    }
}

class program5
{
    public static void main(String A[]) 
    {
        int iValue = 0  ; 
        
        Scanner sobj = new Scanner(System.in); 
        
        System.out.println("Enter the First Number :");
        iValue= sobj.nextInt() ; 

        System.out.println("Table of "+iValue);
        Logic lobj = new Logic();
        lobj.Table(iValue);
       
        sobj.close();
    }
}