import java.util.*;

class Program333
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String Str = "Hello World";

        Str = Str.replaceAll("l","_");

        System.out.println(Str);

        sobj.close();
    }
}