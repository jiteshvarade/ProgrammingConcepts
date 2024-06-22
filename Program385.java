import java.util.*;

class Program385
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int iCol = sobj.nextInt();

        int Arr[][] = new int[iRow][iCol];

        System.out.println("Enter the elements : ");

        int iCnt1 = 0;
        int iCnt2 = 0;
        for(iCnt1 = 0; iCnt1 < iRow; iCnt1++)
        {
            for(iCnt2 = 0; iCnt2 < iCol; iCnt2++)
            {
                Arr[iCnt1][iCnt2] = sobj.nextInt();
            }
        }

        // to display the data
        System.out.println("Entered elements are : ");
        for(iCnt1 = 0; iCnt1 < iRow; iCnt1++)
        {
            for(iCnt2 = 0; iCnt2 < iCol; iCnt2++)
            {
                System.out.print(Arr[iCnt1][iCnt2]+"\t");
            }
            System.out.println();
        }

        sobj.close();
    }
}