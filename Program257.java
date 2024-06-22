import java.util.*;

class Program257
{
    public static void Display(String newStr)
    {
        char Arr[] = newStr.toCharArray();
        int iCnt = 0;
        for(iCnt = 0; iCnt < newStr.length(); iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter your name : ");
        str = sobj.nextLine();

        Display(str);

        sobj.close();
    }
}

// string is internally charcter array