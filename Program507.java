import java.util.*;

class xString
{
    public int CountWords(String Str)
    {
        char[] Arr = Str.toCharArray();
        int iCount = 0;
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == ' ')
            {
                iCount++;
            }
        }

        return iCount;
    }
}

class Program507
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iRet = 0;

        System.out.print("Enter the string : ");
        sobj.nextLine();
        String Str = sobj.nextLine();

        xString xobj = new xString();
        iRet = xobj.CountWords(Str);
        System.out.println("Number of words in the given string is : "+iRet);

        sobj.close();
    }
}