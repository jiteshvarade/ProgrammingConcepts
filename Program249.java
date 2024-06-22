import java.util.*;

class Program249
{
    // changes made inside this function can affect the original array as we have passed object reference
    public static void Display(int array[][])
    {
        System.out.println("ELements of the array are : ");
        for(int iCnt = 0; iCnt < array.length; iCnt++) // .length is a property which gives size of array
        {
            for(int iCnt1 = 0; iCnt1 < arr.length; iCnt1++)
            {
                System.out.print(array[iCnt][iCnt1]+"\t");
            }
            System.out.println();
        }
        System.out.println();
    }
    // length of array is information that gets attached with the object of array, thus when we write .length it just gives the information that was attached to object during creation of array

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        System.out.println("Enter the size of square matrix : ");
        iSize = sobj.nextInt();

        int Arr[][] = new int[iSize][iSize];

        System.out.println("Enter elements in array : ");
        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            for(int iCnt1 = 0; iCnt1 < iSize; iCnt1++)
            {
                Arr[iCnt][iCnt1] = sobj.nextInt();
            }
        }

        Display(Arr);  // object reference is getting passed

        sobj.close();
    }
}