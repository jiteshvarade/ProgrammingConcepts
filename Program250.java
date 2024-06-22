import java.util.*;

class Program250
{
    // changes made inside this function can affect the original array as we have passed object reference
    public static int Addition(int array[])
    {
        int iSum = 0;
        for(int iCnt = 0; iCnt < array.length; iCnt++) // .length is a property which gives size of array
        {
            iSum += array[iCnt];
        }
        return iSum;
    }
    // length of array is information that gets attached with the object of array, thus when we write .length it just gives the information that was attached to object during creation of array

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int iRet = 0;
        System.out.println("Enter the size of array : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter elements in array : ");
        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        iRet = Addition(Arr);  // object reference is getting passed
        System.out.println("Addition of elements in the array are : "+iRet);

        sobj.close();
    }
}