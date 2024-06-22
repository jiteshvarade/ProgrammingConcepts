import java.util.*;

class Program246
{
    public static void EvenOddFactors(int iNo)
    {
        int iSumEven = 0;
        int iSumOdd = 0;
        for(int iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                if((iCnt % 2) == 0)
                {
                    iSumEven += iCnt;
                }
                else
                {
                    iSumOdd += iCnt;
                }
            }
        }

        System.out.println("Sum of even factors is : "+iSumEven);
        System.out.println("Sum of odd factors is : "+iSumOdd);
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        System.out.println("Enter first number : ");
        iValue1 = sobj.nextInt();

        EvenOddFactors(iValue1);

        sobj.close();
    }
}