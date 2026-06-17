
///////////////////////////////////////////////////////////////////
//
//      File Name : Q4.java
//      Project   : Logic Building Assignment 18
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Class Name : EvenOddDigitLogic
//      Method Name: sumEvenOddDigits
//      Input      : Integer
//      Output     : Void
//      Description: Find the sum of even digits and
//                   sum of odd digits separately
//      Date       : 08/06/2026
//      Author     : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

class EvenOddDigitLogic
{
    void sumEvenOddDigits(int num)
    {
        int digit = 0;      // Stores extracted digit
        int evenSum = 0;    // Stores sum of even digits
        int oddSum = 0;     // Stores sum of odd digits

        // If number is negative convert it to positive
        if(num < 0)
        {
            num = -num;
        }

        // Extract digits and calculate sums
        while(num != 0)
        {
            digit = num % 10;

            if(digit % 2 == 0)
            {
                evenSum = evenSum + digit;
            }
            else
            {
                oddSum = oddSum + digit;
            }

            num = num / 10;
        }

        // Display results
        System.out.println("Sum of Even Digits : " + evenSum);
        System.out.println("Sum of Odd Digits  : " + oddSum);
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
        // Create object of EvenOddDigitLogic class
        EvenOddDigitLogic obj = new EvenOddDigitLogic();

        // Function call
        obj.sumEvenOddDigits(123456);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Input  : 123456
//
//      Output :
//      Sum of Even Digits : 12
//      Sum of Odd Digits  : 9
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
