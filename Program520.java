import java.util.*;

class Program520
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        StringBuffer sbobj = new StringBuffer(str);

        sbobj = sbobj.reverse();
            
        System.out.println("Reversed string is : "+sbobj);

        sobj.close();
    }
}