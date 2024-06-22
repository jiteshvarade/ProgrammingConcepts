import java.util.*;

class Matrix
{
    private int iRow;
    private int iCol;
    private int Arr[][];

    Matrix(int A, int B)
    {
        iRow = A;
        iCol = B;

        Arr = new int[iRow][iCol];
    }

    public void Accept_Data()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter elements : ");
        int iCnt1 = 0;
        int iCnt2 = 0;
        for(iCnt1 = 0; iCnt1 < Arr.length; iCnt1++)
        {
            for(iCnt2 = 0; iCnt2 < (Arr[iCnt1].length); iCnt2++)
            {
                Arr[iCnt1][iCnt2] = sobj.nextInt();
            }
        }
    }

    public void Display_Data()
    {
        System.out.println("Entered elements are : ");
        int iCnt1 = 0;
        int iCnt2 = 0;
        for(iCnt1 = 0; iCnt1 < Arr.length; iCnt1++)
        {
            for(iCnt2 = 0; iCnt2 < (Arr[iCnt1].length); iCnt2++)
            {
                System.out.print(Arr[iCnt1][iCnt2]+"\t");
            }
            System.out.println();
        }
    }
}

class Program386
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);
        mobj.Accept_Data();
        mobj.Display_Data();

        sobj.close();
    }
}