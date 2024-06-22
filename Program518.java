import java.util.*;

class Program518
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        System.out.println("Enter the word you want to find : ");
        String Word = sobj.nextLine();

        Word = Word.trim();
        
        str = str.replaceAll(Word,"");

        str = str.replaceAll("\\s+", " ");

        str = str.trim();
            
        System.out.println("Updated string is : "+str);

        sobj.close();
    }
}