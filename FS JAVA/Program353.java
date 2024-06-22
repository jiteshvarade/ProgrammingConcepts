import java.util.*;
import java.io.*;

class Program353
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        byte[] Header = new byte[100];
        String Str = null;
        int FileSize = 0; 
        int iRet = 0;

        System.out.println("Enter the name of packed file that you to unpack : ");
        String PackedFile = sobj.nextLine();

        File fobj = new File(PackedFile);

        try
        {
            FileInputStream fiobj = new FileInputStream(fobj);

            while((iRet = fiobj.read(Header, 0 ,100)) > 0)
            {
                String Hstr = new String(Header);

                System.out.println(Hstr);

                Str = Hstr.trim();  // to remove extra white spaces from the string

                String[] Tokens = Str.split(" "); // argument passed is space character // split method : ky ala ki string split kara
                
                File NewFile = new File("Combine LB 49", Tokens[0]);
                NewFile.createNewFile();

                FileSize = Integer.parseInt(Tokens[1]);

                byte Buffer[] = new byte[FileSize];
                fiobj.read(Buffer, 0, FileSize);

                FileOutputStream foobj = new FileOutputStream(NewFile);
                foobj.write(Buffer, 0, FileSize);
            }
        }
        catch(Exception eobj)
        {
            eobj.printStackTrace();
        }

        sobj.close();
    }
}