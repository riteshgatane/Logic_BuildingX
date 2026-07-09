import java.util.Scanner ; 

class Logic
{
    void checkpalindrome(int num)
    {
        int itemp = 0 ;
        int iOriginal = num ;
        int iDigit = 0 ; 
        int iSum = 0 ;

        while(num > 0)
        {
            iDigit = num % 10 ;
            itemp = itemp * 10 + iDigit ; 
            num = num/10 ;
        }

        if(itemp == iOriginal )
        {
            System.out.println("The Number is Palindrome ");
        }
        else
        {
            System.out.println("The Number is Not palindrome");
        }
    }
}
class program2
{
    public static void main(String A[]) 
    {
        int iValue = 0 ; 
        Scanner sobj = new Scanner(System.in); 
        
        System.out.println("Enter the Number :");
        iValue  = sobj.nextInt() ; 

        Logic lobj = new Logic();
        lobj.checkpalindrome(iValue); 

        sobj.close();
    }
}