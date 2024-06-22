import java.util.*;

class Program248
{
    public static void Display(int iNo)
    {
        for(int iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.print(iCnt+"\t*\t");
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        System.out.println("Enter first number : ");
        iValue1 = sobj.nextInt();

        Display(iValue1);

        sobj.close();
    }
}