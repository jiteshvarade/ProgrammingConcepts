import java.util.*;
import LB.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    // Logic

    public void RowAdd()
    {
        int iCnt1 = 0;
        int iCnt2 = 0;
        int Sum;

        for(iCnt1 = 0; iCnt1 < Arr.length; iCnt1++)
        {
            Sum = 0;
            for(iCnt2 = 0; iCnt2 < Arr[iCnt1].length; iCnt2++)
            {
                Sum += Arr[iCnt1][iCnt2];
            }
            System.out.println("Addition of all elements in the "+(iCnt1 + 1)+" row  : "+Sum);
        }
    }
}

class Program399
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        // Function calls
        mobj.RowAdd();

        mobj = null;
        System.gc();
    }
}