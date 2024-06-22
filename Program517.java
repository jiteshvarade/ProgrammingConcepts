import java.util.*;

class Program517
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        String Arr[] = str.split(" ");

        System.out.println("Enter the word you want to find : ");
        String Word = sobj.nextLine();

        Word = Word.trim();
        int iCnt = 0;

        for(String s : Arr)
        {
            if(s.equals(Word))
            {
                iCnt++;
            }
        }

        System.out.println("Frequency of word "+Word+" is : "+iCnt);

        sobj.close();
    }
}