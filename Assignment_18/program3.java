class Logic 
{
    void printEvennumbers(int n)
    {
        int i =0 ;
        int Number =0;
        if(n > 0 )
        {
            for(i=1 ; i <= n ; i++)
            {
                if(i%2 == 0)
                {
                    System.out.println(i);
                }
            }
            
        }
    }
}


class program3
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.printEvennumbers(12);
    }
}