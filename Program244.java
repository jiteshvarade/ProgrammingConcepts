import java.util.*;

class Program244
{
    public static int Factorial(int iNo)
    {
        int iFact = 1;
        for(int iCnt = 1; iCnt <= iNo; iCnt++)  // Time Complexity = O(N/2)
        {
            iFact = iFact*iCnt;
        }

        return iFact;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iAns = 0;
        System.out.println("Enter first number : ");
        iValue1 = sobj.nextInt();

        iAns = Factorial(iValue1);
        System.out.println("Factorial of number is : "+iAns);

        sobj.close();
    }
}