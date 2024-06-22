import java.util.*;

class Program528
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();
        str = str.replaceAll("\\s", " ");

        str = str.toLowerCase();

        char Arr[] = str.toCharArray();
        int Frequency = 0;

        HashMap <Character, Integer> hobj = new HashMap<>();

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(hobj.containsKey(Arr[iCnt]))
            {
                Frequency = hobj.get(Arr[iCnt]);
                hobj.put(Arr[iCnt], Frequency+1);
            }
            else
            {
                hobj.put(Arr[iCnt], 1);
            }
        }

        Set<Character> setobj = hobj.keySet();
        System.out.println(setobj);

        sobj.close();
    }
}