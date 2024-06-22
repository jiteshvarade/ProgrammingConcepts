import java.util.*;

class Array
{
    public int iRow;
    public int iCol;
    public int Arr[][];

    Array(int A, int B)
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

class Matrixx extends Array 
{
    Matrixx(int A, int B)
    {
        super(A, B);
    }

    public int Sum()
    {
        int sum = 0;
        for (int i = 0; i < iRow; i++) {
            for (int j = 0; j < iCol; j++) {
                sum += Arr[i][j];
            }
        }
        return sum;
    } 
}

class Program387
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int iCol = sobj.nextInt();

        Array aobj = new Array(iRow, iCol);
        aobj.Accept_Data();
        aobj.Display_Data();

        Matrixx mobj = new Matrixx(iRow, iCol);
        int iRet = mobj.Sum();

        sobj.close();
    }
}