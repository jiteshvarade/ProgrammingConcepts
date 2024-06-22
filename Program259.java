import java.util.*;

class Program259
{
    public static int DisplayCapital(String newStr)
    {
        int iCount = 0;
        char Arr[] = newStr.toCharArray();
        int iCnt = 0;
        for(iCnt = 0; iCnt < newStr.length(); iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount++;
            }
        }
        return iCount;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;
        int iRet = 0;

        System.out.println("Enter your name : ");
        str = sobj.nextLine();

        iRet = DisplayCapital(str);
        System.out.println("Number of capital letters in the given string is : "+iRet);

        sobj.close();
    }
}

// string is internally charcter array
