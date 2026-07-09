import java.util.* ;

class Logic 
{
    void SumOfDigits(int iNo)
    {
        int iSum = 0 ;
        int iDigit = 0 ; 
        while(iNo > 0)
        {
            iDigit = iNo % 10 ; 
            iSum = iSum + iDigit ;
            iNo = iNo / 10 ; 
        }
        System.out.println("Sum of Digits is : "+iSum);
    }
}

class program1
{
    public static void main(String A[])
    {
        int iValue = 0 ;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Numbers");
        iValue = sobj.nextInt() ;

        Logic lobj = new Logic();
        lobj.SumOfDigits(iValue);

        sobj.close();
    }
}