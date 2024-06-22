import java.util.*;

class Program342
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String Str = sobj.nextLine();
        sobj.close();

        Str = Str.trim();

        System.out.println("After trim : "+Str);

        Str = Str.replaceAll("\\s+"," ");  //used regular expression that \\s indicates two white spaces more than 2 or 2

        System.out.println("After replaceAll : "+Str);

        String words[] = Str.split(" ");

        System.out.println("Number of words in the sentence are : "+words.length);
    }
}