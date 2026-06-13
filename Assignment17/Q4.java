///////////////////////////////////////////////////////////////////
//
//      Class Name : MinimumLogic
//      Method Name: findMin
//      Input      : Three Integers
//      Output     : Void
//      Description: Display the minimum number
//      Date       : 08/06/2026
//      Author     : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

class MinimumLogic
{
    void findMin(int a, int b, int c)
    {
        int min = a;

        if(b < min)
        {
            min = b;
        }

        if(c < min)
        {
            min = c;
        }

        System.out.println("Minimum number is : " + min);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Main Class
//
///////////////////////////////////////////////////////////////////

public class Q4
{
    public static void main(String args[])
    {
        // Create object of MinimumLogic class
        MinimumLogic obj = new MinimumLogic();

        // Function call
        obj.findMin(3,7,2);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Input  : 3 7 2
//
//      Output :
//      Minimum number is : 2
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(1)
//
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////