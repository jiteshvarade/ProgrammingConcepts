import java.util.*;

class Program337
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String Str = "     Hello      World  Demo     ";

        Str = Str.replaceAll(" ","");  // replace spce character with nothing

        System.out.println(Str);

        sobj.close();
    }
}