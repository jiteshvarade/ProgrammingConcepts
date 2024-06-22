import java.util.*;

class Program515
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

        for(String s : Arr)
        {
            System.out.println("Word is "+s+" having length "+s.length());
        }

        sobj.close();
    }
}