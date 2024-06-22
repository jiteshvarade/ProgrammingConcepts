import java.util.*;

class Program344
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String Str = sobj.nextLine();

        Str = Str.trim();
        Str = Str.replaceAll("\\s+"," ");  //used regular expression that \\s indicates two white spaces more than 2 or 2
        String words[] = Str.split(" ");

        for(String s : words) // for each loop
        {
            System.out.println(s);
        }

        sobj.close();
    }
}