///////////////////////////////////////////////////////////////////
//
//      File Name : Q2.java
//      Project   : Logic Building Assignment 21
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Class Name : EvenOddRangeLogic
//      Method Name: countEvenOddRange
//      Input      : Integer
//      Output     : Void
//      Description: Count total even and odd
//                   numbers between 1 and N
//      Date       : 08/06/2026
//      Author     : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

class EvenOddRangeLogic
{
    void countEvenOddRange(int n)
    {
        int i = 0;          // Loop counter
        int iEven = 0;      // Store count of even numbers
        int iOdd = 0;       // Store count of odd numbers

        // Count even and odd numbers
        for(i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
            {
                iEven++;
            }
            else
            {
                iOdd++;
            }
        }

        // Display result
        System.out.println("Even Numbers : " + iEven);
        System.out.println("Odd Numbers  : " + iOdd);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Main Class
//
///////////////////////////////////////////////////////////////////

public class Q2
{
    public static void main(String args[])
    {
        // Create object of EvenOddRangeLogic class
        EvenOddRangeLogic obj = new EvenOddRangeLogic();

        // Function call
        obj.countEvenOddRange(50);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Input  : 50
//
//      Output :
//      Even Numbers : 25
//      Odd Numbers  : 25
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(n)
//
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////
