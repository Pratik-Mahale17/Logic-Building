
///////////////////////////////////////////////////////////////////
//
//      File Name : Q5.java
//      Project   : Logic Building Assignment 20
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Class Name : SmallestDigitLogic
//      Method Name: findSmallestDigit
//      Input      : Integer
//      Output     : Void
//      Description: Find the smallest digit in
//                   the given number
//      Date       : 08/06/2026
//      Author     : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

class SmallestDigitLogic
{
    void findSmallestDigit(int num)
    {
        int digit = 0;      // Store extracted digit
        int iMin = 9;       // Assume 9 as smallest digit initially

        // Convert negative number to positive
        if(num < 0)
        {
            num = -num;
        }

        // Extract digits and find smallest digit
        while(num != 0)
        {
            digit = num % 10;

            if(digit < iMin)
            {
                iMin = digit;
            }

            num = num / 10;
        }

        // Display result
        System.out.println("Smallest digit is : " + iMin);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Main Class
//
///////////////////////////////////////////////////////////////////

public class Q5
{
    public static void main(String args[])
    {
        // Create object of SmallestDigitLogic class
        SmallestDigitLogic obj = new SmallestDigitLogic();

        // Function call
        obj.findSmallestDigit(45872);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Input  : 45872
//
//      Output :
//      Smallest digit is : 2
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Input  : 90341
//
//      Output :
//      Smallest digit is : 0
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
```
