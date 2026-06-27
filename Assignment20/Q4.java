
///////////////////////////////////////////////////////////////////
//
//      File Name : Q4.java
//      Project   : Logic Building Assignment 20
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Class Name : LargestDigitLogic
//      Method Name: findLargestDigit
//      Input      : Integer
//      Output     : Void
//      Description: Find the largest digit in
//                   the given number
//      Date       : 08/06/2026
//      Author     : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

class LargestDigitLogic
{
    void findLargestDigit(int num)
    {
        int digit = 0;          // Store extracted digit
        int iMax = 0;           // Store largest digit

        // Convert negative number to positive
        if(num < 0)
        {
            num = -num;
        }

        // Extract digits and find largest digit
        while(num != 0)
        {
            digit = num % 10;

            if(digit > iMax)
            {
                iMax = digit;
            }

            num = num / 10;
        }

        // Display result
        System.out.println("Largest digit is : " + iMax);
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
        // Create object of LargestDigitLogic class
        LargestDigitLogic obj = new LargestDigitLogic();

        // Function call
        obj.findLargestDigit(83429);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Input  : 83429
//
//      Output :
//      Largest digit is : 9
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(d)
//
//      Space Complexity : O(1)
//
//      Where d = Number of digits
//
////////////////////////////////////////////////////////////////////