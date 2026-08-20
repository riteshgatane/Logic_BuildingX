//Input : “Marvellous Multi OS”

//Output : 4

import java.util.Scanner;

class DoCapital
{
    public static void main(String A[])
    {
        int iCount = 0 ; 
        String str = null ; 
        int i = 0 ; 
        Scanner sobj = new Scanner(System.in) ; 

        System.out.println("Enter the String :") ; 
        str = sobj.nextLine() ;

        str = str.trim() ; 
        str = str.replaceAll("\\s+" , " ") ; 

        char Arr[] = str.toCharArray() ; 

        for(i = 0 ; i < Arr.length ; i++)
        {
            if(Arr[i] == ' ')
            {
            if(Arr[i+1] >= 'a' && Arr[i+1] <= 'z')
            {
                Arr[i+1] = (char)(Arr[i+1] - 32) ; 
            }
            }
        }


        String output = new String(Arr) ; 

        System.out.println("String of Words with First letter capital is : "+output) ; 


        


    }
}