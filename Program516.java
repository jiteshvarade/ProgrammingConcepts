import java.util.*;

class Program516
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        String Arr[] = str.split(" ");

        System.out.println("Number of words are : "+Arr.length);

        String MaxStr = "";
        for(String s : Arr)
        {
            if(s.length() > MaxStr.length())
            {
                MaxStr = s;
            }
        }

        System.out.println("Max length word is : "+MaxStr);

        sobj.close();
    }
}