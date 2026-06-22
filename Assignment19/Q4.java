
///////////////////////////////////////////////////////////////////
//
//      File Name : Q4.java
//      Project   : Logic Building Assignment 19
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Class Name : DigitLogic
//      Method Name: printDigits
//      Input      : Integer
//      Output     : Void
//      Description: Print each digit of a number
//                   separately
//      Date       : 08/06/2026
//      Author     : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

class DigitLogic
{
    void printDigits(int num)
    {
        int digit = 0;      // Stores extracted digit

        // Convert negative number to positive
        if(num < 0)
        {
            num = -num;
        }

        // Extract and display digits
        while(num != 0)
        {
            digit = num % 10;

            System.out.println(digit);

            num = num / 10;
        }
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
        // Create object of DigitLogic class
        DigitLogic obj = new DigitLogic();

        // Function call
        obj.printDigits(9876);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Input  : 9876
//
//      Output :
//      6
//      7
//      8
//      9
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
///////////////////////////////////////////////////////////////////
