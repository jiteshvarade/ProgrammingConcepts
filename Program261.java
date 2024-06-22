import java.util.*;

class Program261
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        int iDigit = 0;
        int iCnt = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 2;
            System.out.print(iDigit);
            iCnt++;
            iNo = iNo / 2;
        }
        System.out.println("Number of 1 Bit in the given number is : "+iCnt);
    }
}