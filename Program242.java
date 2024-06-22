import java.io.*;

class Numbers
{
    private int iNo1;
    private int iNo2;

    public Numbers(int A, int B)
    {
        this.iNo1 = A;
        this.iNo2 = B;
    }

    public int Addition()
    {
        return iNo1 + iNo2;
    }
}

class Program242
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

            Numbers nobj = new Numbers(iValue1, iValue2);
            iRet = nobj.Addition();

            System.out.println("Addition is : "+iRet);

            bobj.close();
        }
        catch(IOException iobj)
        {
            System.out.println("IOException Occured");
        }
    }
}