import java.util.*;
import java.io.*;

class Program325
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of Directory : ");
        String DirectoryName = sobj.nextLine();

        System.out.println("Enter the name of packed file that you want to create : ");
        String PackedFile = sobj.nextLine();
        
        File fobjPack = new File(PackedFile);

        boolean bRet = fobjPack.createNewFile();
        if(bRet == false)
        {
            System.out.println("Unable to create Packed file.");
            sobj.close();
            return;
        }

        File fobj = new File(DirectoryName);

        bRet = fobj.isDirectory();
        if(bRet == true)
        {
            System.out.println("Directory is present");

            File Arr[] = fobj.listFiles();
            System.out.println("Number of files in the directory are : "+Arr.length);

            
            String Header = null;

            FileOutputStream fcombine = new FileOutputStream(PackedFile);
            // Travel Directory
            for(int i = 0; i < Arr.length; i++)
            {
                // create header
                Header = Arr[i].getName() + " " + Arr[i].length();
                
                // add extra white spaces at the end of header
                for(int j = Header.length(); j < 100; j++)
                {
                    Header = Header + " ";
                }

                // convert string header into byte array
                byte hArr[] = Header.getBytes();

                // write header into packed file
                fcombine.write(hArr,0,100);
            }
        }
        else 
        {
            System.out.println("There is no such directory");
        }
        
        sobj.close();
    }
}
