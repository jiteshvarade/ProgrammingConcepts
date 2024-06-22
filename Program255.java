import java.util.*;

class Program255
{
    public static void Display(String newStr)
    {
        System.out.println("Your name is : "+newStr);
        System.out.println("Length of your string is : "+newStr.length()); // Here length is a method
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter your name : ");
        str = sobj.nextLine();

        Display(str);

        sobj.close();
    }
}