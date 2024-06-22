import java.util.*;
import java.io.*;

class Program320
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of Directory : ");
        String DirectoryName = sobj.nextLine();

        boolean bRet = false;
        File fobj = new File(DirectoryName);

        bRet = fobj.isDirectory();
        if(bRet == true)
        {
            System.out.println("Directory is present");

            File Arr[] = fobj.listFiles();
            System.out.println("Number of files in directoy are : "+Arr.length);

            for(int iCnt = 0; iCnt < Arr.length; iCnt++)
            {
                System.out.println("File Name : "+Arr[iCnt].getName()+"File Size : "+Arr[iCnt].length());
            }
        }
        else
        {
            System.out.println("There is no such directory");
        }

        sobj.close();
    }
}
