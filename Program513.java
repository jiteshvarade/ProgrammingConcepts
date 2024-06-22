import java.util.*;

class Program513
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        System.out.println("Updated string is : "+str);

        char Arr[] = str.toCharArray();
        int i = 0;
        int SpaceCnt = 0;

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == ' ')
            {
                SpaceCnt++;
            }
        }

        System.out.println("Number of words in the string is : "+(SpaceCnt+1));

        sobj.close();
    }
}