import java.util.*;

class Program241
{
    // Every class that is inside class whivh contains main functions should be static
    public static int Addition(int iNo1, int iNo2)
    {
        return iNo1 + iNo2;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2 = 0;
        int iRet = 0;

        System.out.println("Enter first number : ");
        iValue1 = sobj.nextInt();
        System.out.println("Enter second number : ");
        iValue2 = sobj.nextInt();

        iRet = Addition(iValue1, iValue2);

        System.out.println("Addition is : "+iRet);
    }
}