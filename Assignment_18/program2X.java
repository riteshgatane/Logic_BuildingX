import java.util.* ;

class Logic 
{
    void printEvennumbers(int n)
    {
        int i =0 ;
        int Number =0;

        
            for(i=1 ; i <= n ; i++)
            {
                if(i%2 == 0)
                {
                    System.out.println(i);
                }
            }
    }
}


class program2X
{
    public static void main(String A[])
    {
        int Number = 0 ;
        Logic lobj = new Logic();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number :");
        Number = sobj.nextInt();
        lobj.printEvennumbers(Number);
    }
}