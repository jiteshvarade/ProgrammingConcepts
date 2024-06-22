import java.io.*;
import Marvellous.Arithmetic;

class Program243
{
    public static void main(String arg[]) 
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        int iValue1 = 0;
        int iValue2 = 0;
        int iRet = 0;

        try
        {
            System.out.println("Enter first number : ");
            iValue1 = Integer.parseInt(bobj.readLine());
            System.out.println("Enter second number : ");
            iValue2 = Integer.parseInt(bobj.readLine());

            Arithmetic nobj = new Arithmetic(iValue1, iValue2);
            iRet = nobj.Addition();

            System.out.println("Addition is : "+iRet);

            bobj.close();
        }
        catch(IOException eobj)
        {
            System.out.println("Exception Occured");
        }
    }
}

// javac -d . Arithmetic.java // to create a directory inside currect curectory which stores Arithmetic.class file
// javac Program243.java // to compile the code
// java Program243