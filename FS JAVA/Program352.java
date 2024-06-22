import java.util.*;
import java.io.*;

class Program352
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of packed file that you to unpack : ");
        String PackedFile = sobj.nextLine();

        File fobj = new File(PackedFile);

        try
        {
            FileInputStream fiobj = new FileInputStream(fobj);
            
            byte[] Header = new byte[100];

            while()
            {
                fiobj.read(Header, 0 ,100);

                String Hstr = new String(Header);

                System.out.println(Hstr);

                String Str = Hstr.trim();  // to remove extra white spaces from the string

                String[] Tokens = Str.split(" "); // argument passed is space character // split method : ky ala ki string split kara
                
                File NewFile = new File(Tokens[0]);
                NewFile.createNewFile();

                int FileSize = Integer.parseInt(Tokens[1]);

                byte Buffer[] = new byte[FileSize];
                fiobj.read(Buffer, 0, FileSize);

                FileOutputStream foobj = new FileOutputStream(NewFile);
                foobj.write(Buffer, 0, FileSize);

                foobj.close();
                fiobj.close();
            }
        }
        catch(Exception eobj)
        {
            eobj.printStackTrace();
        }

        sobj.close();
    }
}